#include<bits/stdc++.h>

using namespace std;


struct tree{
    struct tree *left;
    struct tree *right;
    int data;
    tree(int x){
        left = NULL;
        right = NULL;
        data = x;
    }    
};

bool isPairSum(struct tree *root,int sum,unordered_set<int> &set1){
    if(!root){
        return false;
    }
    if(isPairSum(root->left,sum,set1)){
        return true;
    }
    if(set1.find(sum-root->data) != set1.end()){
        return true;
    }
    else{
        set1.insert(root->data);
    }
    return isPairSum(root->right,sum,set1);
}




int main(int argc, char const *argv[])
{
    struct tree *root = new tree(10);
    root->left = new tree(5);
    root->right = new tree(20);
    root->right->left = new tree(16);
    root->right->right = new tree(40);
    unordered_set<int> set1;
    cout<<isPairSum(root,21,set1);
    return 0;
}
