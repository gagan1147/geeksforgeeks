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
int maxLevel = 0;
void leftView(struct tree *root,int level){
    if(!root){
        return;
    }
    if(maxLevel<level){
        cout<<root->data<<" ";
        maxLevel = level;
    }
    leftView(root->left,level+1);
    leftView(root->right,level+1);
    
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
    leftView(root,1);
    cout<<endl;
    return 0;
}