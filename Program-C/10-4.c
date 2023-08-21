// P1036
#include<stdio.h>
#include<math.h>
int all = 0;
void test(int x){
    for(int a = 2; a <= sqrt(x); a++){
        if(! ( x % a ) ){
            all++;
            return;
        }
    }
}
void fun(int x, int _a){
    int a = _a + x;
    fun(++x, a);
}
int main(){
    // 暴力枚举
    
}