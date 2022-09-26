#include <stdio.h>
#include <stdlib.h>
int a;
float b,result;
float product_function()
{
 result=a*b;
 return result;nk
}
 int main()
 {
    printf("enter a number\n");
    scanf("%d",&a);
    printf("enter a number\n");
    scanf("%f",&b);
    result=product_function(a,b);
    printf("%f",result);
    return 0;
 }

