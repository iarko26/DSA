#include <iostream>
#include<vector>
using namespace std;


vector<int> findUnion(vector<int> arr1,vector<int> arr2) {
    int i,j=0;
    int n=arr1.size();
    int m=arr2.size();
    vector<int>unionarr;
    
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            if(unionarr.empty() || unionarr.back()!=arr1[i]){
                unionarr.push_back(arr1[i]);
            }
            i++;
            
        }
        else{
            if(unionarr.empty() || unionarr.back()!=arr2[j]){
                unionarr.push_back(arr2[j]);
            }
            j++;
        }
       
        
    }
    while(j<m){
          if(unionarr.empty() || unionarr.back()!=arr2[j]){
                unionarr.push_back(arr2[j]);
            }
            j++;
        
    }
    
       while(i<n){
          if(unionarr.empty() || unionarr.back()!=arr1[i]){
                unionarr.push_back(arr1[i]);
            }
            i++;
        
    }
    return unionarr;
    

}

int main() {
   vector<int> arr1 = {1, 1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 4, 4, 5, 6};
   vector<int> res=findUnion(arr1,arr2);
   for(int val:res){
       cout<<val<<" ";
   }
}