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


int res = 0;
int burn_time(struct tree *root,int key,int &dist){
    if(!root){
        return 0;
    }
    if(root->data == key){
        dist = 0;
        return 1;
    }
    int ldist =-1,rdist =-1;
    int lh = burn_time(root->left,key,ldist);
    int rh = burn_time(root->right,key,rdist);
    if(ldist != -1){
        dist = ldist + 1;
        res = max(res,dist+rh);
    }
    else if(rdist != -1){
        dist = rdist + 1;
        res = max(res,dist+lh);
    }
    return 1+max(lh,rh);


}

int main(int argc, char const *argv[])
{
    int dist = -1;
    struct tree *root = new tree(10);
    root->left = new tree(20);
    root->right = new tree(30);
    root->left->left = new tree(40);  
    root->left->right = new tree(50);  
    root->left->left->left = new tree(60);
    root->left->left->left->left = new tree(70);
    cout<<burn_time(root,50,dist);
    cout<<endl;
    return 0;
}