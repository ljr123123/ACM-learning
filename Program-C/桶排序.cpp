#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int n, x;
int a[100];
struct bundle{
    int size = 0;
    int content[100];
} b[10];


int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        x = a[i] / 10;
        b[x].content[b[x].size] = a[i];
        b[x].size++;
    }

    for(int i = 0; i < 10; i++){
        sort(b[i].content, b[i].content + b[i].size);
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < b[i].size; j++){
            printf("%d ", b[i].content[j]);
        }
    }

    return 0;
}