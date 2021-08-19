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

void spiral(struct tree* root){
    if(!root){
        return;
    }
    queue<struct tree*> q1;
    bool reverse = false;
    stack<struct tree*> s1;
    q1.push(root);
    while(q1.size()>0){
        int count  = q1.size();
        for(int i=0;i<count;i++){
            struct tree *curr = q1.front();
            q1.pop();
            if(reverse){
                s1.push(curr);
            }
            else{
                cout<<curr->data<<" ";
            }
            if(curr->left){
                q1.push(curr->left);
            }
            if(curr->right){
                q1.push(curr->right);
            }
        }
        if(reverse){
            while(!s1.empty()){
                cout<<s1.top()->data<<" ";
                s1.pop();
            }
        }
        reverse = !reverse;
    }
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
    spiral(root);
    cout<<endl;
    
    return 0;

}