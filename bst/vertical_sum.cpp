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

struct tree *insert_node(struct tree *root,int x){
    if(!root){
        return new tree(x);
    }
    if(x<root->data){
        root->left = insert_node(root->left,x);
    }
    else if(x>root->data){
        root->right = insert_node(root->right,x);
    }
    return root;
}

void vSumR(struct tree *root,int hd,map<int,int> &map1){
    if(!root){
        return;
    }
    vSumR(root->left,hd-1,map1);
    map1[hd] += root->data; 
    vSumR(root->right,hd+1,map1);
}


void vSum(struct tree *root){
    if(!root){
        return;
    }
    map<int,int> map1;
    vSumR(root,0,map1);
    for(auto x:map1){
        cout<<x.second<<" ";
    }
    cout<<endl;
}
void preOrder(struct tree *root){
    if(!root){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    
    preOrder(root->right);
}

int main(int argc, char const *argv[])
{
    int arr[] = {10,15,35,40,20,75,80,25};
    int n = sizeof(arr)/sizeof(arr[0]);
    struct tree *root=NULL;
    for(int x:arr){
        root = insert_node(root,x); 
    }
    preOrder(root);
    cout<<endl;
    vSum(root);

    return 0;
}

