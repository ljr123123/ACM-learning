#include<stdio.h>
void qsort(long long int a[], int l, int r){
    int i = l, j = r, flag = a[(l + r) / 2], tmp;
    do{
        while(a[i] < flag)i++;
        while(a[j] > flag)j--;
        if(i <= j){
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    }while(i <= j);
    printf("i:%d j:%d\n", i, j);
    if(l < j)qsort(a, l, j);
    if(i < r)qsort(a, i, r);
}
int main(){
    long long int all[100000];
    int l;
    scanf("%d", &l);
    for(int i = 0; i < l; i++){
        scanf("%lld", &all[i]);
    }
    qsort(all, 0, l-1);
    for(int i = 0; i < l; i++){
        printf("%lld ", all[i]);
    }
    return 0;
}