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

Node* deletehead(Node* head) {
    if (head == NULL) return NULL;
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
    Node* prev = head;
    head = head->next;
    head->prev = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}

Node* deleteTail(Node* head) {
    if (head == NULL) return NULL;
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
    Node* Tail = head;
    while (Tail->next != NULL) {
        Tail = Tail->next;
    }
    Node* prev = Tail->prev;
    prev->next = nullptr;
    Tail->prev = nullptr;
    delete Tail;
    return head;
}

Node* deleteKthElement(Node* head, int k) {
    if (head == NULL) return NULL;
    if (k == 1) return deletehead(head);

    int count = 1;
    Node* temp = head;
    while (temp != NULL && count < k) {
        temp = temp->next;
        count++;
    }
    if (temp == NULL) return head; // k is out of bounds

    // If deleting tail
    if (temp->next == NULL) {
        Node* prev = temp->prev;
        prev->next = nullptr;
        temp->prev = nullptr;
        delete temp;
        return head;
    }
    // Middle element
    Node* kprev = temp->prev;
    Node* knext = temp->next;
    kprev->next = knext;
    knext->prev = kprev;
    temp->prev = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;
}


Node* deleteNode(){

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
    int k = 4;

    Node* head = convert2DLL(arr, n);
    //head = deletehead(head);
    //head = deleteTail(head);
    head = deleteKthElement(head, k);
    print(head);
    return 0;


}
