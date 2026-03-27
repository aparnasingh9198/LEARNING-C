#include<stdio.h>
#include<math.h>
int main()
{
    float si ,ci,p,r,t;
    printf("enter principle amount");
    scanf("%f",&p);
    printf("enter rate");
    scanf("%f",&r);
    printf("enter time");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("\nsi=%f,si");
    ci=p*pow((1+r/100),t)-p;
    printf("\nci=%f,ci");
    return 0;

}