#include <stdio.h>

int main()
{
int a=65456,b=7652334,c=28787635;
if (a>b && a>c)
printf("a is larger ");
else if (b>c && b>a)
printf("b is larger");
else if (c>a && c>b)
printf("c is larger");
}
