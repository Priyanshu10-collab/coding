#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }

};

void preorder(Node* root){
    if(root == NULL){
        return;
    }

    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);

}
void Inorder(Node* root){
    if(root == NULL){
        return ;
    }

    Inorder(root -> left);
    cout<<root -> data << " ";
    Inorder(root -> right);
}

void postOrder(Node* root){
    if(root == NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root-> right);
    cout<< root -> data << " ";
}

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }
}


int main()
{
    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);

    
    cout<<"Preorder:- ";
    preorder(root);
    cout << endl;
    cout<<"PostOrder:- ";
    Inorder(root);
    cout<<endl;
    cout<<"PostOrder:- ";
    postOrder(root);

    cout<<endl;
    cout<<"Level Order :- ";
    levelOrderTraversal(root);

 return 0;
}