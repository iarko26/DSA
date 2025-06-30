#include <bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

Node* Arr2LL(int arr[],int n){
    Node* head=new Node(arr[0]);
    Node* current=head;
 
    for(int i=1;i<n;i++){
        Node* temp=new Node(arr[i]);
        current->next=temp;
        current=temp;
        
    }
    return head;
    
    
    
    
    
}

int main() {
   int arr[]={2,5,8,7};
   int n=4;
//   Node* y=new Node(arr[0]);

Node* head=Arr2LL(arr,n);
   cout<<head->data;
}
