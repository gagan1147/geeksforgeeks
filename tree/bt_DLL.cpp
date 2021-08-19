#include<bits/stdc++.h>

using namespace std;

struct tree{
    int data;
    struct tree *left;
    struct tree *right;
    tree(int x){
        data = x;
        left = NULL;
        right = NULL;
    }

};
struct tree *prevv = NULL;


struct tree *bt_to_dll(struct tree *root){
    if(!root){
        return NULL;
    }
    struct tree *head = bt_to_dll(root->left);
    if(!prevv){
        head = root;
    }
    else{
        root->left = prevv;
        prevv->right = root;
    }
    prevv = root;
    bt_to_dll(root->right);
    return head;
}



int main(int argc, char const *argv[])
{
    struct tree *root = new tree(40);
    root->left = new tree(15);
    root->right = new tree(20);
    root->left->left = new tree(10);  
    root->left->right = new tree(30);  
    root->right->left = new tree(50);
    root->right->right = new tree(60); 
    root->right->left->left = new tree(70);
    root->right->left->right = new tree(80);
    struct tree *dll = bt_to_dll(root);
    while(dll){
        cout<<dll->data<<" ";
        dll = dll->right;
    }
    cout<<endl;
    return 0;
}