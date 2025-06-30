#include <bits/stdc++.h>
using namespace std;

void movezerosend(int arr[],int n){ 
vector<int>temp;
for(int i=0;i<n;i++){
    if(arr[i]!=0){
        temp.push_back(arr[i]);
    }
}
int nz=temp.size();
for(int i=0;i<nz;i++){
    arr[i]=temp[i];
}
for(int i=nz;i<n;i++){
    arr[i]=0;
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
