
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
    int c=0;
    if(n<=1){
        cout<<"Not Prime"<<endl;
        
    }
    else{
        for(int i=1;i<=n;i++){
            if(n%i==0){
                c++;
            }
        }
        if(c>2){
            cout<<"Not Prime"<<endl;
        }
        else{
            cout<<"Prime"<<endl;
        }
    }
    


}
