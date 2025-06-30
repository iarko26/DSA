#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[],int n, int d){
 reverse(arr,arr+d);
 reverse(arr+d,arr+n);
 reverse(arr,arr+n);
}

int main() {
	int n=7;
    int arr[]={1,2,3,4,5,6,7};
    int d=3;
    leftRotate(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    return 0;
    

}
