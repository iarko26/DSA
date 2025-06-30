#include <bits/stdc++.h>
using namespace std;

bool CheckarraySorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
        return true;
    }
    
}

int main() {
    int n=6;
    int arr[] = {10, 20, 4, -45, 99, 99};
    
    printf("%s", CheckarraySorted(arr, n) ? "True" : "False");
    

	

}
