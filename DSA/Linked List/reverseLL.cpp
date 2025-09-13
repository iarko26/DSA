
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
Node* reverseLL(Node* head){
Node* temp=head;
Node* prev=nullptr;
while(temp!=NULL){
    Node* last=temp->next;
    temp->next=prev;
    prev=temp;
    temp=last;
}

return prev;


}
void printLL(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;

    }
    cout<<endl;

}




int main() {
    int arr[] = {2, 5, 8, 7};
    int n = 4;

    Node* head = Arr2LL(arr, n);
    head=reverseLL(head);

    cout << "Final list: ";
    printLL(head);

    return 0;
}

