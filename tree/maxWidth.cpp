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


void printlevel_by(struct tree *root){

    if(!root){
        return;
    }

    queue<struct tree*> q1;
    q1.push(root);
    q1.push(NULL);
    int count  = 1;
    int res = 0;
    while(q1.size()>1){
        struct tree *curr = q1.front();
        q1.pop();
        if(!curr){
            cout<<"\n";
            
            q1.push(NULL);
            continue;
        }
        res = res>q1.size()?res:q1.size();
        cout<<curr->data<<" ";
        if(curr->left){
            q1.push(curr->left);
        }
        if(curr->right){
            q1.push(curr->right);
        }
        
    }
    
    cout<<endl<<res<<" ";
}


int main(int argc, char const *argv[])
{
    struct tree *root = new tree(10);
    root->left = new tree(15);
    root->right = new tree(20);
    root->left->left = new tree(30);  
    root->left->right = new tree(40);  
    root->right->left = new tree(50);
    root->right->right = new tree(60); 
    root->right->left->left = new tree(70);
    root->right->left->right = new tree(80);
    printlevel_by(root);
    cout<<endl;
    return 0;
}