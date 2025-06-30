#include<iostream>
using namespace std;
int fib(int N){
    if(N==0 || N==1){
        return N;

    }
    int temp1=fib(N-1);
    int temp2=fib(N-2);
    return temp1+temp2;
}
int main(){
    int res=fib(4);
    cout<<res<<endl;

}