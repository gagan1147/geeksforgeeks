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

void create(struct tree *root,int hd,map<int,vector<int>> &map1){
    if(!root){
        return;
    }
    
    map1[hd].push_back(root->data);
    create(root->left,hd-1,map1);
    create(root->right,hd+1,map1);
}


void vertical_traversal(struct tree *root){
    map<int,vector<int>> map1;
    create(root,0,map1);
    for(auto x:map1){
        for(int i:x.second){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main(int argc, char const *argv[])
{
    // struct tree *root = new tree(1);
    // root->left = new tree(2);
    // root->right = new tree(3);
    // root->left->left = new tree(4);
    // root->left->right = new tree(5);
    // root->right->left = new tree(6);
    // root->right->right = new tree(7);
    // root->right->right->left = new tree(8);
    // root->right->right->left->left = new tree(9);
    struct tree *root = new tree(10);
    root->left = new tree(20);
    root->right = new tree(30);
    root->left->left = new tree(40);
    root->left->right = new tree(50);
    vertical_traversal(root);
    

    return 0;
}
