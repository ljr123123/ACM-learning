#include<cstdio>
#include<queue>
using namespace std;
const int MAX_N = 10000;
const int MAX_M = 10000;
const int INF = 100000000;

typedef pair<int, int> P;
int N, M;
int sx, sy;
int gx, gy;

int d[MAX_N][MAX_M];

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

queue<P> que;

int bfs(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            d[i][j] = INF;
        }
    }
    que.push(P(sx, sy));
    d[sx][sy] = 0;

    while(que.size()){
        P p = que.front();
        if(p.first == gx && p.second == gy)break;

        for(int i = 0; i < 4; i++){
            int nx = p.first + dx[i], ny = p.second + dy[i];
            if(0 <= nx && nx < N && 0 <= ny && ny < M){}
        }
    }
}

int main(){
    scanf("%d %d", &M, &N);
    scanf("%d %d", &sx, &sy);
    scanf("%d %d", &gx, &gy);

}