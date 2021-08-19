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

struct node *head = NULL;

void insert(int data){
    if(!head){
        head = new node(data);
    }
    struct node *curr = head;
    while(curr->next){
        curr = curr->next;
    }
    curr->next = new node(data);
}

void remove_duplicate(){
    struct node *curr = head;
    while(curr && curr->next){
        if(curr->data == curr->next->data){
            struct node *temp = curr->next;
            curr->next = curr->next->next;
            free(temp);
        }
        else{
            curr = curr->next;
        }
    }
}
struct node *reverse_group(struct node *curr,int k){
    
}
int main(int argc, char const *argv[])
{
    insert(1);
    insert(2);
    insert(2);
    insert(3);
    insert(3);
    insert(4);

    insert(5);
    insert(5);
    insert(6);
    insert(7);
    struct node *curr = head;
    while(curr){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
    remove_duplicate();
    curr=head;
    while(curr){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
    return 0;
}
