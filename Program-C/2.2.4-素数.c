#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int isPrime(int m){
    int i;
    for(i = 0; i <= sqrt(m); i++){
        if(m%i==0)return 0;
    }
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    if(isPrime(n))printf("prime\n");
    else printf("not prime\n");
    return 0;
}