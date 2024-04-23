#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

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
    reverse(ans.begin(), ans.end());
    return ans; // Return the reversed level order traversal vector
}

void inorder(node *root)
{
    // Iterative Inorder Traversal using Stack
    stack<node *> s;
    node *curr = root;

    while (curr != NULL || !s.empty())
    {
        while (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }

        curr = s.top();
        s.pop();

        cout << curr->data << " ";

        curr = curr->right;
    }
}

void preorder(node *root)
{
    // Iterative Preorder Traversal using Stack
    stack<node *> s;
    s.push(root);

    while (!s.empty())
    {
        node *curr = s.top();
        s.pop();

        cout << curr->data << " ";

        if (curr->right)
            s.push(curr->right);

        if (curr->left)
            s.push(curr->left);
    }
}

void postorder(node *root)
{
    // Iterative Postorder Traversal using Stack
    stack<node *> s1, s2;
    s1.push(root);

    while (!s1.empty())
    {
        node *curr = s1.top();
        s1.pop();
        s2.push(curr);

        if (curr->left)
            s1.push(curr->left);

        if (curr->right)
            s1.push(curr->right);
    }

    while (!s2.empty())
    {
        node *curr = s2.top();
        s2.pop();
        cout << curr->data << " ";
    }
}

void buildFromLevelOrder(node *&root)
{
    queue<node *> q;

    cout << "Enter data for root" << endl;
    int data;
    cin >> data;
    root = new node(data);

    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            //purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            {
                //queue still has some child nodes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    node *root = NULL;

    buildFromLevelOrder(root);

    cout << "Level Order Traversal:" << endl;
    levelOrderTraversal(root);

    vector<int> reversedLevelOrder = reverseLevelOrder(root);
    cout << "\nReversed Level Order Traversal:" << endl;
    for (int i : reversedLevelOrder)
    {
        cout << i << " ";
    }

    cout << "\nInorder Traversal:" << endl;
    inorder(root);

    cout << "\nPreorder Traversal:" << endl;
    preorder(root);

    cout << "\nPostorder Traversal:" << endl;
    postorder(root);

    return 0;
}
