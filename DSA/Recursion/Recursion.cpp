#include<iostream>
using namespace std;
int sum(int N){
    if(N==1){
        return 1;
    }
    int temp=sum(N-1);
    return temp+N;
    
}

int main(){
    int res=sum(5);
    cout<<res<<endl;
    return 0;
    
    
    
}

