#include <bits/stdc++.h>
using namespace std;


int main() {
    int nums[]={1,2,3,4,5};
    int n=5;
	int temp=nums[0];
    for(int i=1;i<n;i++){
        nums[i-1]=nums[i];
    }
    nums[n-1]=temp;
    for(int i=00;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
    
    

}
