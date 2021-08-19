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

void level_order(struct tree *root){
   if(!root){
        return;
    }
    queue<struct tree *> q1;
    q1.push(root);
    while (!q1.empty())
    {
        struct tree *node  = q1.front();
        
        q1.pop();
        cout<<node->data<<" ";
        if (node->left){
            q1.push(node->left);
        }
        if(node->right){
            q1.push(node->right);
        }
    }
}


int main(int argc, char const *argv[])
{
    struct tree *root = new tree(10);
    root->left = new tree(15);
    root->right = new tree(20);
    root->left->left = new tree(30);  
    root->right->left = new tree(40);
    root->right->right = new tree(50); 
    root->right->left->left = new tree(60);
    root->right->left->right = new tree(70);
    level_order(root);
    cout<<endl;
    return 0;
}
