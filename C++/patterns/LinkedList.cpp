#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    Node(int data, Node* next) {
        this->data = data;
        this->next = next;
    }

    // Destructor
    ~Node() {
        int value = this->data;
        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void InsertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d) {
    if (position == 1) {
        InsertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL) {
        cout << "Invalid Position" << endl;
        return;
    }

    if (temp->next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node* &head) {
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    } else {
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while (cnt < position && curr != NULL) {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        if (curr == NULL) {
            cout << "Position out of bounds" << endl;
            return;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* convertArr2LL(vector<int>& arr) {
    if (arr.empty()) return NULL;

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

int lengthofLL(Node* head){
    int count = 0;
    Node* temp = head;
    while (temp!= NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int checkIfPresent(Node* head,int val){
    Node* temp = head;
    while(temp!= NULL) {
    if(temp->data == val) return 1;
    temp = temp->next;
    }
    return 0;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = convertArr2LL(arr);
    Node* tail = head;
    
    cout << checkIfPresent(head, 4) << endl;

    // Move tail to the last node
    while (tail->next != NULL) {
        tail = tail->next;
    }

    print(head); // Output: 1 2 3 4 5
    cout<< lengthofLL(head)<<endl;

    insertAtTail(tail, 6);
    print(head); // Output: 1 2 3 4 5 6

    insertAtPosition(tail, head, 4, 22);
    print(head); // Output: 1 2 3 22 4 5 6

    deleteNode(3, head); 
    print(head); // Output: 1 2 22 4 5 6

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    // Cleanup memory
    delete head;

    return 0;
}
