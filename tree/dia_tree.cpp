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


int height(struct tree *root){
    if(!root){
        return 0;
    }
    return 1+max(height(root->left),height(root->right));
}


int diameter(struct tree *root){
    if (!root){
        return 0;
    }
    int d1 = 1 + height(root->left) + height(root->right);
    int d2 = diameter(root->left);
    int d3 = diameter(root->right);
    return max(d1,max(d2,d3));
}

int res = 0;
int efficient(struct tree *root){
    if(!root){
        return 0;
    }
    int left = efficient(root->left);
    int right = efficient(root->right);
    res = max(res,1+left+right);
    return 1+max(left,right);
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
    cout<<diameter(root);
    efficient(root);
    cout<<endl;
    cout<<res;
    cout<<endl;
    return 0;
}