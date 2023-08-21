#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a,&b,&c);
    printf("%.2f %.2f",
    (-b+sqrt(1.0*b*b-4*a*c))/(2*a),
    (-b-sqrt(1.0*b*b-4*a*c))/(2*a)
    );
    return 0;
}