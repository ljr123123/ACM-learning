#include<stdio.h>
char a[100][100], s, x, y;
int main(){
    scanf("%d %d", &x, &y);
    for(int i = 0; i < x; i++){
        getchar();
        for(int j = 0; j < y; j++){
            a[i][j] = getchar();
        }
    }
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            if(a[i][j] != '*'){
                s = 0;
                for(int k = i - 1; k <= i + 1; k++){
                    if(k < 0 || k >= x)continue;
                    for(int m = j - 1; m <= j + 1; m++){
                        if(m < 0 || m >= y)continue;
                        if(a[k][m] == '*')s++;
                    }
                }
                a[i][j] = s + 48;
            }
        }
    }
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}