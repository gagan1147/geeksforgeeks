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

struct tree *lca(struct tree *root,int n1,int n2){
    if(!root){
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }
    struct tree *left = lca(root->left,n1,n2);
    struct tree *right = lca(root->right,n1,n2);
    if(left && right){
        return root;
    }
    return left?left:right;
    
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
    cout<<lca(root,80,20)->data;
    cout<<endl;
    return 0;
}