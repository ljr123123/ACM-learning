#include<iostream>
#include<cstdio>
#include<stack>
#include<cmath>
using namespace std;

int all = 0;
long long int a[20];
int sum = 0;
int n, k;

int is_prime(int x){
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0)return false;
    }
    return true;
}

void dps(int index, int gets, int sum){
    if(index > n)return;
    if(gets == k){
        if(is_prime(sum))all++;
        return;
    }
    dps(index + 1, gets + 1, sum + a[index]);
    dps(index + 1, gets, sum);
}

int main(){
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++)scanf("%d", &a[i]);

    dps(0, 0, 0);

    printf("%d", all);
    return 0;
}