#include<bits/stdc++.h>

using namespace std;


struct tree{
    struct tree *left;
    struct tree *right;
    int data;
    tree(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};


struct tree *insert(struct tree* root,int x){
    if (!root){
        return new tree(x);
    }
    if(root->data<x){
        root->right = insert(root->right,x);
    }
    else if(root->data>x){
        root->left = insert(root->left,x);
    }
}
void inOrder(struct tree *root){
    if(!root){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void preOrder(struct tree *root){
    if(!root){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    
    preOrder(root->right);
}
struct tree *successor(struct tree *curr){
    curr = curr->right;
    while(curr && curr->left){
        curr=curr->left;
    }
    return curr;
}
struct tree *delete_node(struct tree *root,int x){

    if(!root){
        return NULL;
    }
    if(root->data>x){
        root->left = delete_node(root->left,x);
    }
    else if(root->data<x){
        root->right = delete_node(root->right,x);
    }
    else{
        if(!root->left){
            struct tree* temp = root->right;
            delete root;
            return temp;
        }
        else if(!root->right){
            struct tree *temp = root->right;
            delete root;
            return temp;
        }
        else{
            struct tree *succ = successor(root);
            root->data = succ->data;
            root->right = delete_node(root->right,succ->data);
        }
    }
}
struct tree *floor(struct tree *root,int x){
    struct tree *res = NULL;
    while(root){
        if(root->data==x){
            return root;
        }
        else if(root->data<x){
            res = root;
            root = root->right;
        }
        else{
            root = root->left;
        }
    }
    return res;
}
struct tree *ceil(struct tree *root,int x){
    struct tree *res = NULL;
    while(root){
        if(root->data == x){
            return root;
        }
        else if(root->data<x){
            root = root->right;
        }
        else{
            res = root;
            root = root->left;
        }
    }
    return res;
}
int main(int argc, char const *argv[]){
    

    int arr[] = {50,30,10,40,70,60,55,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    struct tree *head = NULL;
    for(int i=0;i<n;i++){
        head = insert(head,arr[i]);
    }
    inOrder(head);
    cout<<endl;
    preOrder(head);
    cout<<endl;
    // head = delete_node(head,50);
    // inOrder(head);
    // cout<<endl;
    cout<<floor(head,58)->data<<" ";
    cout<<endl;
    cout<<ceil(head,58)->data<<" ";
    cout<<endl;
    return 0;
}