#include<bits/stdc++.h>

using namespace std;

struct tree{

    struct tree *left;
    struct tree *right;
    int data;
    int lcount;
    tree(int x){
        data = x;
        left = NULL;
        right = NULL;
        lcount=0;
    }
};

struct tree *insert_node(struct tree *root,int x){
    if(!root){
        return new tree(x);
    }
    if(root->data<x){
        root->right = insert_node(root->right,x);
    }
    else if(root->data>x){
        root->left = insert_node(root->left,x);
        root->lcount++;
    }
    return root;
}


struct tree *find_kth(struct tree *root,int k){
    if(!root){
        return NULL;
    }
    int count = root->lcount+1;
    if(count  == k){
        return root;
    }
    if(count>k){
        return find_kth(root->left,k);
    }
    return find_kth(root->right,k-count);
}

void inOrder(struct tree *root){
    if(!root){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int main(int argc, char const *argv[]){
    

    int arr[] = {50,20,10,40,100,70,60,80,120};
    int n = sizeof(arr)/sizeof(arr[0]);
    struct tree *root = NULL;
    for(int i=0;i<n;i++){
        root = insert_node(root,arr[i]);
    }
    inOrder(root);
    cout<<endl;
    cout<<find_kth(root,4)->data<<endl;
    return 0;
}
