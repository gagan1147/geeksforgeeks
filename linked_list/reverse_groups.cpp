

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


struct node *reverse_group(struct node *head,int k){
    if(!head){
        return NULL;
    }   
    struct node *curr = head;
    int count=0;
    struct node *next,*prevv=NULL;
    
    while(curr && count<k){
        next = curr->next;
        curr->next = prevv;
        prevv = curr;
        curr = next;
        count++;
    }
    if(next){
        struct node* rest_head = reverse_group(next,k);
        head->next = rest_head;
    }
    return prevv;
}
int main(int argc, char const *argv[])
{
    struct node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);
    // head->next->next->next->next->next = new node(6);
    // head->next->next->next->next->next->next = new node(7);
    // head->next->next->next->next->next->next->next = new node(8);
    // head->next->next->next->next->next->next->next->next = new node(9);

     struct node *curr = head;
    while(curr){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
    curr= reverse_group(head,3);
    while(curr){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
    
    return 0;
}
