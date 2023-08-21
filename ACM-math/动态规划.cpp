#include<cstdio>
#include<cmath>
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    stack<int> s;
    queue<int> a;
    s.push(1);
    a.push(1);
    a.push(2);
    printf("%d\n", s.top());
    printf("%d", a.back());
}