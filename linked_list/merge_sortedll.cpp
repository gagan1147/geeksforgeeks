#include<bits/stdc++.h>

using namespace std;

struct node{
    struct node *next;
    int data;
    node(int x){
        data = x;
        next = NULL;
    }
};


struct node *merge_ll(struct node *headA,struct node *headB){

    if(!headA || !headB){
        return headA?headA:headB;
    }
    if(headA->data<headB->data){
        headA->next = merge_ll(headA->next,headB);
        return headA;
    }
    else{
        headB->next = merge_ll(headA,headB->next);
        return headB;
    }
    

}


int main(int argc, char const *argv[]){
    

    struct node *headA = new node(1);
    struct node *headB = new node(1);
    headA->next = new node(3);
    headA->next->next = new node(7);
    headB->next = new node(2);
    struct node *head = merge_ll(headA,headB);
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
    delete(head);
    delete(headA);
    delete(headB);
    return 0;
}
