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

int preIndex = 0;
struct tree *bt_from_io(int pre[],int in[],int is,int ie){
    if(is>ie){
        return NULL;
    }
    struct tree *root = new tree(pre[preIndex++]);
    int index;
    for(int i=is;i<=ie;i++){
        if(in[i] == root->data){
            index = i;
            break;
        }
    } 
    root->left = bt_from_io(pre,in,is,index-1);
    root->right = bt_from_io(pre,in,index+1,ie);
    return root;
}

void inorder(struct tree *root){
    if(!root){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(int argc, char const *argv[])
{

    int in[] = {40,20,60,50,70,10,80,100,30};
    int pre[] = {10,20,40,50,60,70,30,80,100};
    int n = sizeof(pre)/sizeof(pre[0]); 
    struct tree *root = bt_from_io(pre,in,0,n-1);
    inorder(root);
    cout<<endl;
    return 0;
}