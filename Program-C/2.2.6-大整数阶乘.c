#include<stdio.h>
int a[10000], i, j, l=0, s;
int main(){
    int n;
    a[0] = 1;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        s = 0;
        for(j = 0; j <= l; j++){
            s = s + a[j] * i;
            a[j] = s % 10;
            s = s / 10;
        }
        while(s){
            l++;
            a[l] = s%10;
            s=s/10;
        }
    }
    for(i = l; i >= 0; i--){
        printf("%d", a[i]);
    }
    return 0;
}