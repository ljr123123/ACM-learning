#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;

#define floor first 
#define count second

typedef pair<int, int> PII;

int N, A, B;
int a[210];
queue<PII> Q;
int main(){
    scanf("%d %d %d", &N, &A, &B);
    for(int i = 1; i <= N; i++){
        scanf("%d", &a[i]);
    }
    Q.push({A, 0});

    while(!Q.empty()){
        PII b = Q.front();
        Q.pop();

        int down = b.floor - a[b.floor];
        int up = b.floor + a[b.floor];

        if(b.floor == B){
            printf("%d", b.count);
            break;
        };
        if(down > 0){
            Q.push({down, b.count+1});
        }
        if(up <= N){
            Q.push({up, b.count+1});
        }
    }

    return 0;
}