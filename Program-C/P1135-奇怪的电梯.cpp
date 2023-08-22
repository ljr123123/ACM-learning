#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;
int step = -1;
struct PII{
    int floor;
    int count;
};

int N, A, B;
int a[210];
int c[210];
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
            step = b.count;
            break;
        };
        if(down > 0 && !c[down]){
            Q.push({down, b.count+1});
            c[down] = 1;
        }
        if(up <= N && !c[up]){
            Q.push({up, b.count+1});
            c[up] = 1;
        }
    }

    printf("%d", step);
    return 0;
}