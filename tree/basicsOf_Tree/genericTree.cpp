#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Node
{
public:
   int data;
   vector<Node*>children;

   Node(int x ){
    this->data = x;
   }
};

Node* createTree(){
    int data ;
    cout<<"enter node :";
    cin>>data;
    if (data == -1)
    {
        return NULL;
    }

    Node* root = new Node(data);

    while (true)
    {
        cout << "\nchild of "<<data ;
        Node* child = createTree();
        if (child == NULL) break;
        root->children.push_back(child);
        
    }
    return root;
    
}

void printingLevelVise_Using_endl(Node *root)
{
     if (!root) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);  

    while (q.size() > 1) {
        Node* front = q.front();
        q.pop();

        if (front == NULL) {
            cout << endl;
            q.push(NULL);
        } else {
            cout << front->data << " ";
            for (Node* child : front->children) {
                q.push(child);
            }
        }
    }
    cout << endl;
}


int main(){
    Node*root = createTree();
cout<<"\njinga lala hu hu : ";
    printingLevelVise_Using_endl(root);
    return 0;
}