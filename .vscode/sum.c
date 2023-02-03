#include <stdio.h>
int main () {
    float a,b,c,d,e;
    printf("marks got in first subject :%f\n",&a);
    scanf("%f",&a);

    printf("marks got in second subject :%f\n",&b);
    scanf("%f",&b);

    printf("marks got in third subject :%f\n",&c);
    scanf("%f",&c);

    printf("marks got in fourth subject :%f\n",&d);
    scanf("%f",&d);

    printf("marks got in fifth subject :%f\n",&e);
    scanf("%f",&e);

    float x;
    x = (a+b+c+d+e/5);

    printf("your marks average is: %f.2f",x);
    return 0;
}
