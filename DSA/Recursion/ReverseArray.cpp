void printArray(int org[],int n){
    for(int i=0;i<n;i++){
        cout<<org[i]<<endl;

    }


}
void reverseArray(int arr[],int n){
    int org[n];
    for(int i=n-1;i>=0;i--){
        org[n-i-1]=arr[i];

    }
    printArray(org,n);
    

}


int main(){
    int n=5;
    int arr[]={5,4,3,2,1};
    reverseArray(arr,n);
    
    
    
}