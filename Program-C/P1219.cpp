#include<iostream>
#include<cstdio>
using namespace std;

int n;

int count = 0;

int chess[13][13] = {0};

int ans[3][13] = {0};

int mX[4] = {0, 1, 0, -1}, mY[4] = {1, 0, -1, 0};

void refresh(int _i){
    for(int i = _i; i < n; i++){
        for(int j = 0; j < n; j++){
            chess[i][j] = 0;
        }
    }
}

void remove(int ci, int cj){

    //上下左右
    for(int i = 0; i < 4; i++){
        if(ci + mX[i] >= 0 && cj + mY[i] >= 0){
            chess[ci + mX[i]][cj + mY[i]] = 1;
        }
    }

    //右下角
    for(int i = 1; i + ci < n && i + cj < n; i++){
        chess[ci + i][cj + i] = 1;
    }

    //左下角
    for(int i = 1; i + ci < n && cj - i >= 0; i++){
        chess[ci + i][cj - i] = 1;
    }

    //左上角
    for(int i = 1; ci - i >= 0 && cj - i >= 0; i++){
        chess[ci - i][cj - i] = 1;
    }

    //右上角
    for(int i = 1; ci - i >= 0 && cj + i < n; i++){
        chess[ci - i][cj + i] = 1;
    }
}

void test(int i, int times){
    if(i >= n)return;
    for(int j = 0; j < n; j++){
        if(!chess[i][j]){
            ans[times][j] = j;
            remove(i, j);
            test(i+1, times);
        }
    }
    refresh(i);
}

int main(){
    scanf("%d", &n);
    test(0, 0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << chess[i][j] << " ";
        }
        printf("\n");
    }
}