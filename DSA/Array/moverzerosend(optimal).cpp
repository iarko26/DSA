#include <bits/stdc++.h>
using namespace std;

void movezerosend(int arr[],int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1)return;
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    


}

int main() {
	int n=10;
    int arr[]={1,0,2,3,2,0,0,4,5,1};
    
    movezerosend(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    return 0;
    
}
   