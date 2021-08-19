#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node *next;
    node(int x){ 
        data = x; 
        next = NULL;
    }
};

void insert_inorder(struct node *head,int data){

    if(!head){
        return; 
    }
    struct node *curr = head,*prevv=NULL;
    while(curr->data<data){
        prevv = curr;
        curr = curr->next;
        if(!curr){
            break;
        }
        
    }
    if(!curr){
        prevv->next = new node(data);
        return;
    }
    struct node *temp = new node(data);
    temp->next = curr;
    prevv->next = temp;

}
struct node *reversell(struct node *curr){
    struct node *prevv = NULL;
    while(curr){
        struct node *next = curr->next;
        curr->next = prevv;
        prevv  = curr;
        curr = next;
    }
    return prevv;
}


int main(int argc, char const *argv[])
{
    struct node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(8);
    struct node *curr = head;
    while(curr){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    curr = head;
    insert_inorder(head,5);
    insert_inorder(head,6);
    insert_inorder(head,7);
    cout<<endl;
    while(curr){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    insert_inorder(head,9);
    curr = head;
    cout<<endl;
    while(curr){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    
cout<<endl;
    curr = reversell(head);
    
    while(curr){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    return 0;
}
