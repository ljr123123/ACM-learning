#include<stdio.h>
int a[1000], b[1000];
int al = 0, bl = 0;
int main(){
    while((a[al+1] = getchar() - 48)!= -38){
        al++;
    }
    while((b[bl+1] = getchar() - 48)!= -38){
        bl++;
    }
    if(al > bl){
        for(int i = al; i >= 1; i--){
            if(i - (al-bl) >= 1) {
                if(a[i] + b[i - (al - bl)] >= 10)++a[i-1];
                a[i] = (a[i] + b[i - (al - bl)]) % 10;
            }
            else {
                if(a[i] >= 10)++a[i-1];
                a[i] = a[i] % 10;
            }
        }
        if(a[0])printf("%d", 1);
        for(int i = 1; i <= al; i++){
            printf("%d", a[i]);
        }
    }
    else{
        for(int i = bl; i >= 1; i--){
            if(i - (bl-al) >= 1) {
                if(b[i] + a[i - (bl - al)] >= 10)++b[i-1];
                b[i] = (b[i] + a[i - (bl - al)]) % 10;
            }
            else {
                if(b[i] >= 10)++b[i-1];
                b[i] = b[i] % 10;
            }
        }
        if(b[0])printf("%d", 1);
        for(int i = 1; i <= bl; i++){
            printf("%d", b[i]);
        }
    }
    return 0;
}