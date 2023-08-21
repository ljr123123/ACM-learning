#include<stdio.h>
#include<string.h>
char a[1001], b[1001], d[1001];
int s = 0;
int abs(int a1, int b1){
    return a1 > b1? a1 - b1 : b1 - a1;
}
int main(){
    scanf("%s", &a);
    scanf("%s", &b);
    // char c[1001];
    // int abs_a_b = abs(strlen(a), strlen(b));
    // for(int i = abs_a_b; i >= 0; i--){
    //     c[i] = '0';
    // }
    // c[abs_a_b+1] = '\0';
    // if(strlen(a) > strlen(b)) {
    //     strcpy(a, strcat("0", a));
    //     strcat(c, b);
    //     for(int i = strlen(a)-1; i >= 0; i--){
    //         s = c[i] + a[i] - 48 - 48 + s;
    //         c[i] = s % 10 + 48;
    //         s /= 10;
    //     }
    // }
    // else {
    //     strcat(c, a);
    // }
    // printf("%s\n", c);
    strcpy(d, strcat("0", a));
    printf("%s", d);
    return 0;
}