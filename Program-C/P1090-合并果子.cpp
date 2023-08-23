#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int n;
long int spirit = 0;
long int a[10000];

bool cmp(int a, int b){
    return a < b;
}

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++)scanf("%d", &a[i]);

    for(int i = 0; i < n - 1; i++){
        a[i + 1] += a[i];
        spirit += a[i + 1];
        a[i] = 0;
        sort(a, a + n, cmp);
    }

    printf("%ld", spirit);
    return 0;
}