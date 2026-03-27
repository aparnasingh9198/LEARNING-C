#include<stdio.h>
int main()
{
    float sum,per,a,b,c,d,e;
    printf("enter maths marks: ");
    scanf("%f",&a);
    printf("enter physics marks: ");
    scanf("%f",&b);
    printf("enter chemistry marks: ");
    scanf("%f",&c);
    printf("enter computer science marks: ");
    scanf("%f",&d);
    printf("enter english marks: ");
    scanf("%f",&e);
    sum=a+b+c+d+e;
    printf("\nsum=%f",sum);
    per=((a+b+c+d+e)/500)*100;
    printf("\nper=%f",per);

}