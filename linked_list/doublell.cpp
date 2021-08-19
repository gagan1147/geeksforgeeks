#include<bits/stdc++.h>

using namespace std;


struct node
{
  int data;
  struct node *next;
  struct node *prev;
  node(int x) { 
      data = x; 
      next = NULL;
      prev = NULL; }
};
void addNode(node *head, int pos, int data)
{
   if(!head){
       head = new node(data);
   }
   if(pos ==0){
       struct node *temp = new node(data);
       head->prev = temp;
       temp->next = head;
       head=  temp;
       return;
   }
   struct node *curr = head;
   while(pos--){
       curr = curr->next;
   }
   struct node *temp = new node(data);
   if(!curr->next){
       curr->next = temp;
       temp->prev = curr;
   }
   else{
       temp->next = curr->next;
       temp->next->prev = temp->next;
       curr->next = temp;
   }
   
}

struct node *reverseDLL(struct node *head){
    if(!head || !head->next){
        return head;
    }
    node *curr = head,*prevv = NULL;
    while(curr){
        prevv = curr->prev;
        curr->prev = curr->next;
        curr->next = prevv;
        curr = curr->prev;
    }
    return prevv->prev;
}
int main(int argc, char const *argv[])
{
    struct node *head = new node(2);
    head->next = new node(4);
    head->next->prev = head;
    head->next->next = new node(5);
    head->next->next->prev = head->next;
    addNode(head,2,6);
    struct node *curr = head;
    while(curr){
        cout<<curr->data<<" ";
        curr = curr->next;

    }
    head = reverseDLL(head);
    cout<<endl;
    curr = head;
    while(curr){
        cout<<curr->data<<" ";
        curr = curr->next;

    }
    cout<<endl;
    return 0;
}
