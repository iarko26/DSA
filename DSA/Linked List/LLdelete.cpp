
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

void printLL(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;

    }
    cout<<endl;

}

Node* deletehead(Node* head){
    if(head==NULL) return head;
Node* temp=head;
head=head->next;
delete temp;
return head;
}


Node* deleteTail(Node* head){
if(head==NULL || head->next==NULL){return NULL;}
Node* temp=head;
while(temp->next->next!=NULL){
    temp=temp->next;

}
delete(temp->next);
temp->next=NULL;
return head;



}

Node* deletek(Node* head,int k){
if(head==NULL){
    return head;
}
if(k==1){
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}

Node* temp=head;
Node* prev=NULL;
int count=0;
while(temp!=NULL){
    count++;
    if(count==k){
        prev->next=prev->next->next;
        delete temp;
        break;
    }
    prev=temp;
    temp=temp->next;
}
return head;


}

Node* deleteNode(Node* head,int node){
if(head==NULL){
    return head;
}
if(head->data==node){
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}

Node* temp=head;
Node* prev=NULL;

while(temp!=NULL){

    if(temp->data==node){
        prev->next=prev->next->next;
        delete temp;
        break;
    }
    prev=temp;
    temp=temp->next;
}
return head;


}


int main() {
    int arr[] = {2, 5, 8, 7};
    int n = 4;

    Node* head = Arr2LL(arr, n);
    head = deleteNode(head,2);

    cout << "Final list: ";
    printLL(head);

    return 0;
}


