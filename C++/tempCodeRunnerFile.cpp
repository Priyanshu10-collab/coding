class Node{
    int data;
    Node* next;

    Node(int data1){
        this ->data = data1;
        this ->next = NULL;
    }

    Node(int data1, Node* next1){
        this -> data = data1;
        this -> next = next1;
    }
};

Node* convertArrayToLinkedList(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* tail = head;

    for(int i = 1 ; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        tail -> next = temp;
        tail = temp;
    }
    return head;
}