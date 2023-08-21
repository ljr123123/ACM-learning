#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int days(int y, int m, int d){
    int a[12] = {31, 28, 31, 30, 30, 31, 1};
}
int main(){
    int year, month, day;
    scanf("%d/%d/%d", &year, &month, &day);
    printf("%d\n", days(year, month, day));
    return 0;
}