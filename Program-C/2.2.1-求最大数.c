#include <stdio.h>
int main(){
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if(x < y) x = y;
    if(x < z) x = z;
    printf("%d", x);
    return 0;
}