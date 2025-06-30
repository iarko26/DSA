#include<iostream>
using namespace std;
int reverse(int n){
    bool isnegative=n<0;
    n=abs(n);
    
    int rev=0;
    while(n>0){
        
       
        rev=(rev*10)+n%10;
        n/=10;
        
        
    }
    return isnegative ? -rev : rev;
    
    
    
    

}
int main(){
    int res=reverse(-77890);
    cout<<res<<endl;
}