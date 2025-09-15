#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node*right;

    Node(int x){
        this->data = x;
        this->left = NULL;
        this->right = NULL;
    }
};

void PreOrderTraversal( Node* root){
    if (root == NULL)
    {
        return;
    }
    cout<< root->data << " ";
    PreOrderTraversal (root->left);
    PreOrderTraversal (root->right);
}

void InorderTraversal (Node * root){
    if (root == NULL)
    {
        return;
    }
    InorderTraversal(root->left );
    cout << root->data<< " ";
    InorderTraversal(root->right );
    
}
void PostorderTraversal (Node * root){
    if (root == NULL)
    {
        return;
    }
    PostorderTraversal(root->left );
    PostorderTraversal(root->right );
    cout << root->data<< " ";
    
}
Node* createTree(){
    int data;
    cout<<" Enter the node ";
    cin>>data;

    if(data == -1){
        return NULL;
    }

    Node *root = new Node(data);
     cout<<"\nleft of "<<data;
     root->left = createTree();
     
     cout<<"\nRight of "<<data;
    root->right = createTree();
}



int main(){

    Node* root = createTree();
    PreOrderTraversal(root);
    cout<<endl;
    InorderTraversal(root);
    cout<<endl;
    PostorderTraversal(root);

    return 0;
}
    
