#include<bits/stdc++.h>

using namespace std;


struct TrieNode{
    struct TrieNode *child[2];
    TrieNode(){
        child[0] = NULL;
        child[1] = NULL;
    }
};


const int ROW = 4;
const int COL = 3;
bool matrix[ROW][COL] = {{1,0,0},{1,1,1},{1,0,0},{0,1,0}};



bool insert_Node(struct TrieNode *root,int row){
    struct TrieNode *curr = root;
    bool flag = false;
    for(int i=0;i<COL;i++){
        int index = matrix[row][i];
        if(!curr->child[index]){
            curr->child[index] = new TrieNode();
            flag = true;
        }
        curr = curr->child[index];
    }
    return flag;
}


int countDist(){
    struct TrieNode *root = new TrieNode(); 
    int res = 0;
    for(int row=0;row<ROW;row++){
        if(insert_Node(root,row)){
            res++;
        }
    }
    return res;
}


int main(int argc, char const *argv[]){

    cout<<countDist()<<endl;
    return 0;
}
