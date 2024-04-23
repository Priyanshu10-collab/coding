#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to insert a node into the Binary Search Tree (BST)
Node* insertIntoBST(Node* &root, int d) {
    if (root == NULL) {
        root = new Node(d);
        return root;
    }

    if (d > root->data) {
        root->right = insertIntoBST(root->right, d);
    } else {
        root->left = insertIntoBST(root->left, d);
    }

    return root;
}

// Function to perform in-order traversal of the BST
void inorder(Node* root) {
    if (root == NULL) {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Function to perform level-order traversal of the BST
void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }

            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}

// Function to find the minimum value node in the BST
Node* minVal(Node* root) {
    Node* temp = root;

    while (temp->left != NULL) {
        temp = temp->left;
    }
    return temp;
}

// Function to delete a node with a given value from the BST
Node* deleteFromBST(Node* root, int val) {
    if (root == NULL) {
        return root;
    }

    if (root->data == val) {
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        } else {
            // Node with two children
            Node* temp = minVal(root->right);
            root->data = temp->data;
            root->right = deleteFromBST(root->right, temp->data);
        }
    } else if (root->data > val) {
        root->left = deleteFromBST(root->left, val);
    } else {
        root->right = deleteFromBST(root->right, val);
    }

    return root;
}

// Function to delete the entire BST and free up memory
void deleteEntireTree(Node* &root) {
    if (root == NULL) {
        return;
    }

    deleteEntireTree(root->left);
    deleteEntireTree(root->right);

    delete root;
    root = NULL;
}

// Function to take user input to create a BST
void takeInput(Node* &root) {
    int data;
    cout << "Enter data (enter -1 to stop): ";
    cin >> data;

    while (data != -1) {
        root = insertIntoBST(root, data);
        cout << "Enter data (enter -1 to stop): ";
        cin >> data;
    }
}

int main() {
    Node* root = NULL;

    cout << "Enter data to create BST:" << endl;
    takeInput(root);
    cout << endl;

    cout << "Printing the BST:" << endl;
    levelOrderTraversal(root);
    cout << endl;

    cout << "Printing the inorder:" << endl;
    inorder(root);
    cout << endl;

    int valueToDelete = 30;
    cout << "Deleting node with value " << valueToDelete << " from BST..." << endl;
    root = deleteFromBST(root, valueToDelete);

    cout << "Printing the BST after deletion:" << endl;
    levelOrderTraversal(root);
    cout << endl;

    // Deallocate memory for the entire tree
    deleteEntireTree(root);

    return 0;
}
