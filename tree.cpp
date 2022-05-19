#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int k){
        data=k;
        left=right=NULL;
    }
};
void inorder(struct Node* root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(struct Node*root){
    if (root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct Node*root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<"post order traversal is: ";
    postorder(root);
    cout<<"\n"<<"preorder traversal is: ";
    preorder(root);
    cout<<"\n"<<"inorder traversal is: ";
    inorder(root);
}