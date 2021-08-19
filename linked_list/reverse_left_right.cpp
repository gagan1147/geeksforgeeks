

#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    struct ListNode *next;
    int data;
    ListNode(int x){
        data = x;
        next = NULL;
    }
    ListNode(int x, ListNode *next1){
        data = x;
        next = next1;
    }
};

ListNode* reverseBetween(ListNode* head, int left, int right) {
        
    ListNode *dummy = new ListNode(0,head);
    ListNode *tail,*prevv = dummy;
    for(int i=0;i<left-1;i++){
        prevv = prevv->next;
    }
    tail = prevv->next;
    for(int i=0;i<right-left;i++){
        ListNode *temp = prevv->next;
        prevv->next  = tail->next;
        tail->next = tail->next->next;
        prevv->next->next = temp;
    }
    return dummy->next;
}

int main(int argc, char const *argv[]){
    

    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head = reverseBetween(head,3,5);
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;

    
    return 0;
}
