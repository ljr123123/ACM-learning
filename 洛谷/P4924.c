#include<stdio.h>
int N[5000][5000];
int main(){
    int n, m, count = 1, x, y, r, z;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            N[i][j] =  count * count;
            count++;    
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", N[i][j]);
        }
        printf("\n");
    }
    return 0;
}