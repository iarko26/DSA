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


Node* reverseDLL(Node* head){
if(head==NULL || head->next==NULL){
return head;}
Node* last=NULL;
Node* current=head;

while(current!=NULL){
    last=current->prev;
    current->prev=current->next;
    current->next=last;
    current=current->prev;


}
return last->prev;

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


    Node* head = convert2DLL(arr, n);
    head=reverseDLL(head);
    print(head);

    return 0;


}

