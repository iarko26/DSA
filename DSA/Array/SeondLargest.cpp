#include <bits/stdc++.h>
using namespace std;

int secondlargest(int arr[],int n){
    
    if(n<2) return INT_MIN;
    int largest=arr[0];
    int secondLargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
            
            
        }
        else if(arr[i]<largest && arr[i]>secondLargest){
            secondLargest=arr[i];
        }
        
    }
    return secondLargest;
}

int main() {
    int n=6;
    int arr[] = {10, 20, 4, -45, 99, 99};
    int res=secondlargest(arr,n);
    cout<<res<<endl;
    

	

}
