#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data1, Node* next1, Node* prev1) {
        data = data1;
        next = next1;
        prev = prev1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node* convert2DLL(int arr[], int n) {
    if (n == 0) return nullptr;
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for (int i = 1; i < n; i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node* InsertBeforeHead(Node* head,int val){

Node* newHead=new Node(val,head,nullptr);
head->prev=newHead;
return newHead;
}

Node* InsertBeforeTail(Node* head,int val){

    if(head->next==NULL){
        return InsertBeforeHead(head,val);
    }
Node* tail=head;
while(tail->next!=NULL){
    tail=tail->next;
}
Node* PRev=tail->prev;
Node* newNode=new Node(val,tail,PRev);
tail->prev=newNode;
PRev->next=newNode;
return head;
}

Node* InsertBeforKth(Node* head,int k,int val){
     if(k==1){
        return InsertBeforeHead(head,val);

     }
     Node* temp=head;
     int count=0;
     while(temp!=NULL){
           count++;
           if(count==k)break;
           temp=temp->next;


}
Node* PRev=temp->prev;
Node* newNode=new Node(val,temp,PRev);
temp->prev=newNode;
PRev->next=newNode;
return head;


}
void print(Node* head) {
    while (head != NULL) {
        cout << head->data << endl;
        head = head->next;
    }
}

int main() {
    int arr[] = {2, 5,7,8};
    int n = 4;
    int val = 4;
    int k=3;

    Node* head = convert2DLL(arr, n);
    //head=InsertBeforeHead(head,val);
    //head=InsertBeforeTail(head,val);
    head=InsertBeforKth(head,k,val);
    print(head);
    return 0;


}

