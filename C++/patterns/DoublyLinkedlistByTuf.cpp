#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data ;
    Node* next;
    Node* back;

    Node(int d){
        this->data = d;
        this->next = NULL;
        this->back = NULL;
    }

    Node(int d, Node* next1, Node* back1){
        this -> data = d;
        this -> next = next1;
        this -> back = back1; 
    }

};



Node* convertArr2DLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1;i<arr.size(); i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev-> next = temp;
        prev = temp;
    }
    return head;
}

void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node* deleteHead(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }

    Node* prev = head;
    head = head -> next;

    head->back = nullptr;
    prev->next = nullptr;
    delete prev;

    return head;
}

Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }

    Node* prev = head;
    while(prev->next != NULL){
        prev = prev->next;
    }

    Node* newTail = prev->back;
    newTail -> next = nullptr;
    prev -> back = nullptr;
    delete prev;
    return head;
}


Node* removeKthElement(Node* head, int k){
    if(head == NULL){
        return NULL;
    }

    int cnt = 0;
    Node* KNode = head;
    while(KNode != NULL){
        cnt++;
        if(cnt == k){
            KNode = KNode->next;
            break;
        }
    }

    Node* prev = KNode -> back;
    Node* front = KNode -> next;

    if(prev == NULL && front == NULL){
        return NULL;
    }

    else if(prev == NULL){
        return deleteHead(head);
    }
    else if(front == NULL){
        return deleteTail(head);
    }

    prev -> next = front;
    front -> back = prev;

    KNode->next = NULL;
    KNode->back = NULL;
    delete KNode;
    return head;
}

void deleteNode(Node* temp){
    Node* prev = temp -> back;
    Node* front = temp -> next;

    if(front == NULL){
        prev -> next = nullptr;
        temp -> back = nullptr;
        delete(temp);
        return;
    }

    prev -> next = front;
    front -> back = prev;

    temp -> next = temp -> back = nullptr;
    delete(temp);
}

//INSERTION 
Node* insertBeforeHead(Node* head, int val){
    Node* newNode = new Node(val,head,nullptr);
    head->back = newNode;

    return newNode;
}

Node* insertBeforeTail(Node* head, int val){
    if(head -> next == NULL){
        return insertBeforeHead(head,val);
    }

    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    Node* prev = tail -> back;
    Node* newNode = new Node(val,tail,prev);
    prev -> next = newNode;
    tail -> back = newNode;
    return head;
}

Node* insertBeforeKthElement(Node* head, int k , int val){
    if(k == 1){
        return insertBeforeHead(head,val);
    }
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k)
        break;
        temp = temp->next;
    }

    Node* prev = temp -> back;
    Node* newNode = new Node(val,temp,prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}

Node* insertBeforeNode(Node* head, Node* node, int val) {
    if (node == nullptr) return head;

    Node* prev = node->back;
    Node* newNode = new Node(val, node, prev);

    if (prev != nullptr) {
        prev->next = newNode;
    } else {
        // Node was the head, so update head
        head = newNode;
    }

    node->back = newNode;
    return head;
}


int main(){

    vector<int> arr = {1,2,3,4,5};
    Node* head = convertArr2DLL(arr);
    print(head);
    head = deleteHead(head);
    print(head);
    head = deleteTail(head);
    print(head);
    head = removeKthElement(head,2);
    print(head);
    deleteNode(head->next);
    print(head);
    head = insertBeforeHead(head,1);
    print(head);
    head = insertBeforeTail(head,3);
    print(head);
    head = insertBeforeKthElement(head,3,2);
    print(head);
    head = insertBeforeNode(head,head->next->next,4);
    print(head);
    return 0;

}