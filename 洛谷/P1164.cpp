#include<cstdio>
// int a[100], M, N;
// long long int all = 0;
// void fun(int x, int sum){
//     if(x > N || sum > M)return;
//     if(sum == M){
//         all++;
//         return;
//     }
//     fun(x+1, sum + a[x]);
//     fun(x+1, sum);
// }
// int main(){
//     scanf("%d %d", &N, &M);
//     for(int i = 0; i < N; i++)scanf("%d", &a[i]);
//     fun(0, 0);
//     printf("%d", all);
//     return 0;
// }

// 动态规划解法

int a[100], f[100][10000] = {0};
int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    for(int i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            
        }
    }
}