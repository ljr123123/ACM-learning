#include<stdio.h>
#include<math.h>
int main(){
    double a, b, c, p;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a + b <=c || a + c <= b || b + c <= a)printf("NO");
    else{
        p = (a + b + c) / 2;
        printf("%lf", sqrt(p*(p-a)*(p-b)*(p-c)));
    }
    return 0;
}