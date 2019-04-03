#include <stdio.h>

int main()
{
    int a,b;
    long long result=1;
    printf("enter the base value",a);
    scanf("%d",&a);
    printf("enter the exponent",b);
    scanf("%d",&b);
    while(b!=0)
    {
        result*=a;
        --b;
    }
    printf("answer = ll%d",result);
    return 0;
}
