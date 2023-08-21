#include<stdio.h>
#include<stdlib.h>
int cmp(const void* p1, const void* p2){
    return *(int*)p1 - *(int*)p2;
}
int main(){
    int a[100], N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }
    qsort(a, N, sizeof(int), cmp);
    printf("%d", a[N-1]);
    return 0;
}