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



void top_view(struct tree *root){

    map<int,int> map1;
    queue<pair<struct tree*,int>> q1;
    q1.push({root,0});
    while(!q1.empty()){
        auto temp = q1.front();
        struct tree *temp_tree = temp.first;
        int hd = temp.second;
        q1.pop();
        if(map1.count(hd) == 0){
            map1[hd] = temp_tree->data;
        }
        if(temp_tree->left){
            q1.push({temp_tree->left,hd-1});
        }
        if(temp_tree->right){
            q1.push({temp_tree->right,hd+1});
        }
    }
    
    for(auto x:map1){
        cout<<x.second<<" ";
    }
}

int main(int argc, char const *argv[])
{
    struct tree *root = new tree(1);
    root->left = new tree(2);
    root->right = new tree(3);
    root->left->left = new tree(4);
    root->left->right = new tree(5);
    root->right->left = new tree(6);
    root->right->right = new tree(7);
    root->right->right->left = new tree(8);
    root->right->right->left->left = new tree(9);
    // struct tree *root = new tree(10);
    // root->left = new tree(20);
    // root->right = new tree(50);
    // root->left->left = new tree(30);
    // root->left->right = new tree(40);
    // root->right->left = new tree(60);
    top_view(root);


    return 0;
}
