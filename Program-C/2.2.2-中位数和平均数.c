#include<stdio.h>
#include<stdlib.h>
int a[2005];
int cmp(const void*x, const void*y){
    return *(int*)x - *(int*)y;
}
int main(){
    int len = 0;
    int sum = 0;
    while(scanf("%d", &a[len])&&a[len]){
        sum += a[len];
        len++;
    }
    qsort(a, len, sizeof(int), cmp);
    double middle = (len%2)?a[len/2]:((a[len/2]+a[len/2-1])/2.0);
    double avg = sum*1.0/len;
    printf("middle:%f average:%f", middle, avg);
    getchar();
    return 0;
}