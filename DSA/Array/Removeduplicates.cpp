#include <bits/stdc++.h>
using namespace std;


int main() {
    int nums[]={1,1,2,2,2,3,3};
    int n=7;
	int i=0;
    for(int j=1;j<n;j++){
        if(nums[j]!=nums[i]){
            nums[i+1]=nums[j];
            i++;
        }
    }
    cout<<i+1<<endl;
    return i+1;
    

}
