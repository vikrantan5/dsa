#include<iostream>

using namespace std;


class Node{
    public:
    int data;
    Node *left ,*right;
    Node(int value){
        data = value;
        left  = right = NULL;
    }
};


void PreOrder(Node *root){
    if(root ==NULL){
       return; 
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);


}
void InOrder(Node *root){
    if(root ==NULL){
       return; 
    }
    InOrder(root->left);
    cout<<root->data<<" ";
    
    InOrder(root->right);


}
void PostOrder(Node *root){
    if(root ==NULL){
       return; 
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
    
    


}
Node *Binary_Tree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node *temp= new Node(x);
    cout<<"Enter th lft child of "<<x<<" :";
    temp->left = Binary_Tree();
      cout<<"Enter th right child of "<<x<<" :";
    temp->right = Binary_Tree();
    return temp;
}

int main(){

cout<<"enter the root node";
Node* root;
root = Binary_Tree();
cout<<"PostOrder";
PreOrder(root);
cout<<"InOrder";
InOrder(root);
cout<<"PreOrder";
PreOrder(root);

}