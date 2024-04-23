#include<iostream>
#include <vector>
#include <algorithm>
#include<queue>
#include<stack>

using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

    node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);    

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;

}

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
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
vector<int> reverseLevelOrder(node *root)
{
    vector<int> ans;
    if (!root)
        return ans; // Return an empty vector if the tree is empty

    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *t = q.front();
        ans.push_back(t->data);
        if (t->right)
            q.push(t->right);
        if (t->left)
            q.push(t->left);
        q.pop();
    }

void inorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

void preorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}
//    stack<pair<node*,int>>s
//    s.push({root,1});
//    string pre = "";
//    string in =  "";
//    string post = "";
//    while(!s.empty()){
//     int state = s.top().second;
//     Node* node = s.top().first;
//     if(state == 1){
//         pre += to_string(node->data);
//         s.top().second = state +1;
//         if(node -> left) s.push({node -> left,1});
//     }
//     else if(state == 2){
//         in += to_string(node->data);
//         s.top().second = state +1;
//         if(node -> right) s.push({node -> right,1});
//    }
//    else{
//     post += to_string(node->data);
//     s.pop();
//    }
//    }
//    cout << "Preorder : " << pre << endl;
//    cout << "Inorder : " << in << endl;
//    cout << "Postorder : " << post << endl;
   }


void buildFromLevelOrder(node* &root) {
    queue<node*> q;

    cout << "Enter data for root" << endl;
    int data ;
    cin >> data;
    root = new node(data);

    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
    }
 }


int main() {

    node* root = NULL;

    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    /*
    //creating a Tree
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    //level order
    cout << "Printing the level order tracersal output " << endl;
    levelOrderTraversal(root);
    cout << "inorder traversal is:  ";
    inorder(root); 
    cout << endl << "preorder traversal is:  ";
    preorder(root); 
    cout << endl << "postorder traversal is:  ";
    postorder(root); 
    */


    return 0;
}