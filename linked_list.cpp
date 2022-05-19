#include<bits/stdc++.h>
using namespace std;
struct listnode{              //creating structure
    int val;                   
    listnode *next;
};
void insert_at_head(listnode *head,listnode *newnode){
    newnode->next=head;
    head=newnode;
   
}
void display(listnode *head){
    while(head!=NULL){
        cout<<head->val<<" ";    //head.val     next stores the address of next node
        head=head->next;         //head.next---this takes the head to next nodes position
    }
}
listnode* deletenode(listnode *head,listnode *cur,listnode*prev){
    int pos;
    cout<<"enter position to delete";
    cin>>pos;
    for(int i=1;i<pos;i++){
        prev=cur;
        cur=cur->next;
    }
    if(prev==NULL){
        head=cur->next;
        cur->next=NULL;
    }
    else{
        prev->next=cur->next;
        cur->next=NULL;
    }
    display(head);
    return head;
    //display(head);
}
int main(){
    struct listnode *head=NULL;     //we can defin as struct node or just listnode
    listnode *first=NULL;            //creating node
    listnode *second=NULL;
    listnode *newnode=NULL;
    head=new listnode();
    first=new listnode();            // as it has no data type we have creat space we can do that by using new listnode()
    second=new listnode();
    newnode=new listnode();
    head->val=2;                    //giving value to head
    head->next=first;               //head.next=next node address
    first->val=3;
    first->next=second;
    second->val=4;
    second->next=NULL; 
    newnode->val=5;
    newnode->next=NULL;
    listnode *cur=head;
    listnode *prev=NULL;
  //  insert_at_head(head,newnode);        
    display(head);
    deletenode(head,cur,prev);
}

