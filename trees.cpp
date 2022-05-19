#include <iostream>
#include<queue>
using namespace std;
class Node{
  public:
  int data;
  Node*left;
  Node*right;
  Node(int d){
    data=d;
    left=NULL;
    right=NULL;
  }
};
Node* buildtree(){
  int d;
  cin>>d;
  Node*root;
  if(d==-1){
    return NULL;
  }
  root=new Node(d);
  root->left=buildtree();
  root->right=buildtree();
  return root;
}
void print(Node*root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  print(root->left);
  print(root->right);            
  
}
int height(Node *root){
    if(root==NULL){
        return 0;
    }
    int ls=height(root->left);
    int rs=height(root->right);
    return max(ls,rs)+1; 
}
//8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
void bfs(Node*root){
  if(root==NULL){
    return;
  }
  queue<Node*>queue;
  queue.push(root);
  queue.push(NULL); //to print levels in a new line otherwise not needed
  while(!queue.empty()){
    Node *cur=queue.front();
    if(cur==NULL){     //this if block is to print output in level by level
      cout<<endl;
      queue.pop();
      if(!queue.empty()){
        queue.push(NULL);
      }
    }
    else{
      queue.pop();
      cout<<cur->data<<",";
      if(cur->left){
        queue.push(cur->left);
      }
      if(cur->right){
        queue.push(cur->right);
      }
    }
  }
  return;
}
int no_of_nodes(Node*root){
  if(root==NULL){
    return 0;
  }
  int ls=no_of_nodes(root->left);
  int rs=no_of_nodes(root->right);
  return ls+rs+1;
}
int main()
{
    Node*root=buildtree();  
    print(root);
    cout<<endl;
    cout<<"height of tree :"<<height(root)<<"\n";
    bfs(root);
    cout<<endl;
    cout<<"no of nodes:"<<no_of_nodes(root)<<"\n";
  return 0;
}