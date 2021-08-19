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


bool childSum(struct tree *root){
    if(!root){
        return true;
    }
    if(!root->left && !root->right){
        return true;
    }
    int sum = 0;
    if(root->left){
        sum += root->left->data;
    }
    if(root->right){
        sum += root->right->data;
    }
    return (root->data == sum && childSum(root->left) && childSum(root->right));
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
    cout<<childSum(root);
    cout<<endl;
    return 0;
}