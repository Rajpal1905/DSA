#include<iostream>

using namespace std;

class Node
{
    public :

    int data;
    Node*left;
    Node*right;
    Node(int x){
        this->data = x;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *createTree(){
    int data ;
    cout<<" Enter node ";
    cin>>data;

    if (data == -1)
    {
        return NULL;
    }

    Node * root = new Node (data);

    cout<<"for left of "<<data;
    
    root->left = createTree();
    
    cout<<"for right of "<<data;
    root->right = createTree();
    
}




int main(){
    Node*root =  createTree();
    return 0;
} 