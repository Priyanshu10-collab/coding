#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }

    Node(int data, Node* next){
        this -> data = data;
        this -> next = next;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}

int lengthofLL(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

bool checkIfPresent(Node* head, int val){
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == val){
            return true;
        }
        temp = temp-> next;
    }
    return false;
}

Node* deletehead(Node* head){
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* deleteTail(Node* head){
    if(head == NULL){
        return nullptr;
    }

    Node* temp = head;
    while(temp->next->next !=NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}

Node* deleteK(Node* head, int k){
    if(head == NULL){
        return head;
    }

    if(k==1){
        return deletehead(head);
    }

    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            prev->next = temp->next;
            temp->next = NULL;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* removeEl(Node* head, int el){
    if(head == NULL)
    return head;

    if(head->data == el){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        if(temp->data == el){
            prev->next = temp->next;
            temp->next = NULL;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* insertHead(Node* head, int value){
    Node* temp = new Node(value,head);
    return temp;
}

Node* insertTail(Node* head, int value){
    if(head == NULL){
        return new Node(value);
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    Node* newNode = new Node(value);
    temp->next = newNode;
    return head;
}

Node* insertPosition(Node* head,int el , int k){
    if(head == NULL )
    if(k == 1){
        return new Node(el);
    }
    else{
        return head;
    }

    if(k == 1){
        return new Node(el,head);
    }


    int cnt = 0;
    Node* temp= head;

    while(temp != NULL){
    cnt++;
    if(cnt == k-1){
        Node* x = new Node(el,temp->next);
        temp -> next = x;
        break;
        }
        temp = temp->next;
    }
    return head;
}


Node* insertBeforeValue(Node* head, int el , int k){
    if(head == NULL){
        return NULL;
    }
    if(head -> data == el){
        return new Node(k,head);
    }

    Node* temp = head;
    while(temp -> next != NULL){
        if(temp -> next -> data == el){
            Node* x = new Node(k,temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}


// Node* reverseLinkedList(Node* head){
//     Node* curr = head;
//     Node* prev = NULL;

//     while(curr != NULL){
//         forward  = curr-> next;
//         curr -> next = prev;
//         prev = curr;
//         curr = forward;
//     }
//     return prev;
// }
// void reverse(Node* head, Node* curr, Node* prev){
//     //base case
//     if(curr = NULL){
//         head = prev;
//         return;
//     }

//     Node* forward = curr -> next;

// }

Node* middleNode(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow -> next;
        fast = fast->next->next;
    }
    return slow;
}


int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = convertArr2LL(arr);
    print(head);
    cout<<endl;
    cout<<lengthofLL(head)<<endl;
    cout<<checkIfPresent(head,4)<<endl;
    head = deletehead(head);
    head = deleteTail(head);
    head = deleteK(head,2);
    head = removeEl(head,4);
    print(head);
    head = insertHead(head,10);
    print(head);
    head = insertTail(head,20);
    print(head);
    head = insertPosition(head,30,3);
    print(head);
    head = insertBeforeValue(head,20,40);
    print(head);
    middleNode(head);
   
    return 0;
}