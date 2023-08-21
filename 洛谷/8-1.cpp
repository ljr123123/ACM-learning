#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int a[520], b[520], c[520];
int main(){
    string A, B;
    cin >> A >> B;
    int len = max(A.length(), B.length());
    for(int i = A.length() - 1, j = 0; i >= 0; i--, j++){
        a[j] = A[i] - '0';
    }
    for(int i = B.length() - 1, j = 0; i >= 0; i--, j++){
        b[j] = B[i] - '0';
    }
    for(int i = 0; i <= len - 1; i++){
        c[i] += a[i] + b[i];
        c[i+1] = c[i]/10;
        c[i] %= 10;
    }
    if(c[len])++len;
    for(int i = len - 1; i >= 0; i--){
        cout << c[i];
    }

    return 0;
}