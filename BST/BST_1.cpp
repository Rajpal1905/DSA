#include<iostream>
#include<queue>

using namespace std;

class Node { 
    public:

    int data;
    Node*left;
    Node*right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node * insertIntoBST (Node* root, int data){
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    
    if (data <= root->data  )
    {
        root->left = insertIntoBST(root->left, data);
    }
    else{
        root->right = insertIntoBST(root->right, data);
    }

    return root;    
}

void createBST (Node* &root){
    cout<<"Enter Node"<<endl;
    int data;
    cin>> data;

    while (data != -1)
    {
        root = insertIntoBST(root,data);
        cout<<"Enter Node : "<<endl;
        cin>>data;
    }
    
}

void levelOder(Node* root){
      if (root == NULL) {
        cout << "NILL hai ji" << endl;
        return;
    }

    queue<Node*>q;

    q.push(root);
    q.push(NULL);

    while (q.size() > 1)
    {
        Node*front = q.front();
        q.pop();
        

        if(front == NULL){
            cout<<endl;
            q.push(NULL);
        }
        else{
            cout << front->data << " ";
                if (front->left) q.push(front->left);
               if (front->right) q.push(front->right);
            
        }
        
    }
    
}
void inOrder(Node*root){
    if(!root) return ;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node*root){
    if(!root) return ;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void preOrder(Node*root){
    if(!root) return ;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int  max_val(Node*root){
    if(root->right == NULL) {
        return root->data;
    }
    Node* temp = root;
    while (temp->right )
    {
        temp = temp->right;
    }
    return temp->data;
    

}

int  min_val(Node*root){
    if(root->left == NULL) {
        return root->data;
    }
    Node* temp = root;
    while (temp->left )
    {
        temp = temp->left;
    }
    return temp->data;
    

}

bool Search(Node* root, int target){
    if (!root )
    {
        cout<<"Tree is empty";
        return false;
    }
    if(root->data == target){
        return true;
    }
    bool r = false , l = false;
    if (target > root->data )
    {
         r = Search( root->right,  target);
    }
    else{
       l = Search(root->left, target);
    }
    
    return l || r;
    
}




int main(){

    Node* root = NULL; //50 30 20 40 60 55 70 80 23
    createBST(root);
    cout<<"Printing level Order"<<endl;
    levelOder(root);
    cout<<"\nPrinting in Order"<<endl;
    inOrder(root);
    cout<<"\nPrinting post Order"<<endl;
    postOrder(root);
    cout<<"\nPrinting pre Order"<<endl;
    preOrder(root);

    cout<<endl<< "Min val : "<< min_val(root);
    
    cout<<endl<< "max val : "<<max_val(root);


    cout<<endl<< "target val : "<<Search(root,40);
    

    return 0;
}