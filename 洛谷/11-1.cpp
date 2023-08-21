#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
#define MAX_BITS 5010
class BigInt{
    public:
    int a[MAX_BITS];
    int length;
    BigInt(string s = "0"){
        int i = s.length() - 1;
        this->length = i + 1;
        for(int j = 0; i >= 0; i--, j++){
            a[j] = s[i] - '0';
        }
    };
    BigInt operator + (BigInt a){
        BigInt c;
        int len = max(a.length, this->length);
        for(int i = 0; i <= len - 1; i++){
            c.a[i] += a.a[i] + this->a[i];
            c.a[i+1] = c.a[i]/10;
            c.a[i] %= 10;
        }
        if(c.a[len])++len;
        c.length = len;
        return c;
    };
    void print(){
        for(int i = this->length - 1; i >= 0; i--){
            cout << this->a[i];
        }
    };
};
int main(){
    int N;
    cin >> N;
    BigInt f[5010];
    f[1] = BigInt("1");
    f[2] = BigInt("2");
    for(int i = 3; i <= N; i++){
        f[i] = f[i-2] + f[i-1];
    }
    f[N].print();
    return 0;
}