
#include<iostream>
#include<cmath>
using namespace std;
int findLargest(int arr[],int n){
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

int main() {
    int arr[]={99,200,1,17,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res=findLargest(arr,n);
    cout<<res<<endl;



}
