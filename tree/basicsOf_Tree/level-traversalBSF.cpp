#include <iostream>
#include <queue>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        this->data = x;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *createTree()
{
    int data;
    cout << " Enter node : ";
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);
    cout << "for left of : " << data;
    root->left = createTree();

    cout << "for right of : " << data;
    root->right = createTree();
}
void printingLevelVise(Node *root)
{
    queue<Node *> q;

    q.push(root);

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();
        cout << front->data << " ";
        if (front->left != NULL)
        {
            q.push(front->left);
        }
        if (front->right != NULL)
        {
            q.push(front->right);
        }
    }
}
void printingLevelVise_Using_endl(Node *root)
{
    queue<Node *> q;

    q.push(root);
    q.push(NULL);

    while (q.size()>1)
    {

        Node *front = q.front();
        q.pop();
        if (front == NULL)
        {
            cout << endl;
            q.push(NULL);
        }
        else
        {
            cout << front->data << " ";
            if (front->left != NULL)
            {
                q.push(front->left);
            }
            if (front->right != NULL)
            {
                q.push(front->right);
            }
        }
    }
}

int main()
{
    Node *root = createTree();
    printingLevelVise(root);
    cout << "\nlevelvise Printing : ";
    printingLevelVise_Using_endl(root);
    return 0;
}