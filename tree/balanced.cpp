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


int balanced(struct tree *root){
    if(!root){
        return 0;
    }
    int lh = balanced(root->left);
    if(lh == -1) return -1;
    int rh = balanced(root->right);
    if(rh == -1) return -1;
    if(abs(rh-lh) > 1){
        return -1;
    }
    return max(lh,rh)+1;
}


int main(int argc, char const *argv[])
{
    struct tree *root = new tree(10);
    root->left = new tree(15);
    root->right = new tree(20);
    root->left->left = new tree(30);  
    root->right->left = new tree(80);
    root->right->right = new tree(50); 
    root->right->left->left = new tree(60);
    root->right->left->right = new tree(70);
    cout<<balanced(root);
    cout<<endl;
    return 0;
}