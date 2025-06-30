#include<iostream>
using namespace std;
void printN(int i, int N){
    if(i>N){return;}
    cout<<"Arnob"<<endl;
    printN(i+1,N);
}
int main(){
    printN(1,1);
    return 0;
}