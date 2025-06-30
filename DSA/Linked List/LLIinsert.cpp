
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



Node* inserthead(Node* head,int el){
Node* temp=new Node(el);
temp->next=head;
return temp;


}

Node* insertTail(Node* head,int el){
Node* newVal=new Node(el);
Node* temp=head;
if(head==NULL){
    return newVal;
}
while(temp->next!=NULL){
    temp=temp->next;

}
temp->next=newVal;
return head;

}

Node* Insertk(Node* head, int el,int k){

if(head==NULL){
    if(k==1){
        Node* newNode=new Node(el);
        return newNode;

    }
    else{
            return NULL;

    }

}

if(k==1){
    Node* temp= new Node(el);
    temp->next=head;
    return temp;
}
int c=0;
Node* temp=head;
while(temp!=NULL){
    c++;
    if(c==k-1){
            Node* newNode= new Node(el);
    newNode->next=temp->next;
    temp->next=newNode;
    break;

    }
    temp=temp->next;
}
return head;

}


int main() {
    int arr[] = {2, 5, 8, 7};
    int n = 4;

    Node* head = Arr2LL(arr, n);
    head=Insertk(head,3,2);

    cout << "Final list: ";
    printLL(head);

    return 0;
}


