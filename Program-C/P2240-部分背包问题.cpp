#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

struct goldCorn{
    double weight;
    double singlePrize;
} a[100];

bool cmp(goldCorn a, goldCorn b){
    return a.singlePrize > b.singlePrize;
}

int N;
double T;
double prize = 0, wS = 0;

int main(){
    scanf("%d %lf", &N, &T);
    for(int i = 0; i < N; i++){
        scanf("%lf %lf", &a[i].weight, &a[i].singlePrize);
        a[i].singlePrize = a[i].singlePrize / a[i].weight;
    }

    sort(a, a + N, cmp);

    for(int i = 0; i < N; i++){
        if(T - wS <= a[i].weight){
            prize += (T - wS) * a[i].singlePrize;
            break;
        }
        else{
            prize += a[i].singlePrize * a[i].weight;
            wS += a[i].weight;
        }
    }

    printf("%.2lf", prize);

    return 0;
}