#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int s1, s2, s3, s4, sum = 0;
int A[20], B[20], C[20], D[20];

bool cmp(int a, int b){
    return a > b;
}
void fbs(int E[], int length){
    int left = 0, right = 0;
    int* _min;
    sort(E, E + length, cmp);

    for(int i = 0; i < length; i++){
        if(left >= right)_min = &right;
        else _min = &left;
        *(_min) += A[i]; 
    }

    sum += max(left, right);
}
int main(){
    scanf("%d %d %d %d", &s1, &s2, &s3, &s4);
    for(int i = 0; i < s1; i++)scanf("%d", &A[i]);
    for(int i = 0; i < s2; i++)scanf("%d", &B[i]);
    for(int i = 0; i < s3; i++)scanf("%d", &C[i]);
    for(int i = 0; i < s4; i++)scanf("%d", &D[i]);

    fbs(A, s1);
    fbs(B, s2);
    fbs(C, s3);
    fbs(D, s4);
    
    printf("%d", sum);
    return 0;
}