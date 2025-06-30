#include<iostream>
using namespace std;
void print(int N){
    if(N==1){
        cout<<N<<endl;
        return;
        
    }
    
    cout<<N<<endl;
    print(N-1);
    
   
    

}
int main(){
print(10);
    
}