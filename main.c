#include <stdio.h>
#include "lib/cal.h"

int main()
{


float num1, num2, result;
char sign;

printf("-------start-------\n");
printf("first num : ");
scanf("%f", &num1);
printf("(+,-,*,/) : ");
scanf(" %c", &sign);
printf("second num : ");
scanf("%f", &num2);

switch(sign)
{
case '+' :
result = add(num1, num2);
break;
case '-' :
result = sub(num1, num2);
break;
case '*' :
result = mul(num1, num2);
break;
case '/' :
result = div(num1, num2);
break;
default :
printf("input error \n");
return 0;
}

printf("result : %2.f \n", result);
return 0;
}
