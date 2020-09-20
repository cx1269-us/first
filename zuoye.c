#include <stdio.h>
#include <math.h>
int main(void)
{
    float a,b,c,x1,x2,y;
    scanf("%f %f %f",&a,&b,&c);
    y=sqrt(b*b-4*a*c);
    x1=((-b)+y)/(2*a);
    x2=((-b)-y)/(2*a);
    printf("%.2f %.2f\n",x1,x2);
    return 0;
}
