#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
int a[520], b[520], c[1020];
int main(){
    string A, B;
    cin >> A >> B;
    for(int i = A.length() - 1; i >= 0; i--){
        a[A.length() - i] = A[i] - '0';
    }
    for(int i = B.length();i >= 0; i--){
        b[B.length() - i] = B[i] - '0';
    }
    // int max_len = max(A.length(), B.length());
    for(int i = 1; i <= A.length(); i++){
        for(int j = 1; j <= B.length(); j++){
            c[i + j - 1] += a[i] * b[j];
        }
    }
    int len_c = A.length() + B.length();
    for(int i = 1; i <= len_c; i++){
        c[i+1] += c[i]/10;
        c[i] %= 10;
    }
    for(;!c[len_c];)len_c--;
    for(int i = max(1, len_c); i >= 1; i--){
        cout << c[i];
    }
    return 0;
}