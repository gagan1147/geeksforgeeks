#include<bits/stdc++.h>

using namespace std;


struct trieNode{
    struct trieNode *child[26];
    bool isEnd;
    trieNode(){
        isEnd = false;
        for(int i=0;i<26;i++){
            child[i] = NULL;
        }
    }
};

bool search_node(struct trieNode *root,string &key){
    struct trieNode *curr = root;
    for(int i=0;i<key.length();i++){
        int index = key[i] - 'a';
        if(!curr->child[index]){
            return false;
        }
        curr = curr->child[index];
    }
    return curr->isEnd;
}

void prefix(struct trieNode *root,string &key){
    struct trieNode *curr = root;
    string temp = "";
    for(int i=0;i<key.length()-1;i++){
        int index = key[i] - 'a';
        if(curr->child[index]){
            temp = temp + key[i];
            cout<<temp<<endl;
            // return false;
        }
        curr = curr->child[index];
    }
    // return curr->isEnd;
}

void inserrtNode(struct trieNode *root,string &key){
    struct trieNode *curr = root;
    for(int i=0;i<key.length();i++){
        int index = key[i]-'a';
        if(!curr->child[index]){
            curr->child[index] = new trieNode();
        }
        curr = curr->child[index];
    }
    curr->isEnd = true;
}

struct trieNode *insert_Node_new(struct trieNode *root,string &key){
    struct trieNode *curr = root;
    for(int i=0;i<key.length();i++){
        int index = key[i]-'a';
        if(!curr->child[index]){
            curr->child[index] = new trieNode();
        }
        curr = curr->child[index];
    }
    curr->isEnd = true;
    return root;
}
bool isEmpty(struct trieNode *root){
    for(int i=0;i<26;i++){
        if(root->child[i]){
            return false;
        }
    }
    return true;
}
struct trieNode *delete_node(struct trieNode *root,string &key,int i){
    if(!root){
        return NULL;
    }
    if(i == key.length()){
        //if(root->isEnd){
            root->isEnd = false;
        //}
        if(isEmpty(root)){
            delete(root);
            root = NULL;
        }
        return root;
    }
    int index = key[i] - 'a';
    root->child[index] = delete_node(root->child[index],key,i+1);
    if(isEmpty(root) && !root->isEnd){
        delete(root);
        root = NULL;
        
    }
    return root;
}
void check_str(string *arr, int n){
    //code here
    
    struct trieNode *curr = new trieNode();
    vector<string> temp;
    int count = 1;
    ostringstream str1;
    for(int x=0;x<n;x++){
        string key = arr[x];
        string temp_str = "";
        struct trieNode *curr2 = curr;
        int i;
        for(i=0;i<key.length();i++){
            int index = key[i] - 'a';
            temp_str = temp_str + key[i];
            if(!curr2->child[index]){
                //temp_str = temp_str + key[i];
                temp.push_back(temp_str);
                break;
                //return false;
            }
            
            curr2 = curr2->child[index];
        }
    //return curr->isEnd;
        if(i==key.length()){
            count++;
            str1 << count;
            
            temp.push_back(key+" "+str1.str());
        }
        curr = insert_Node_new(curr,key);
    }
    for(string key:temp){
        cout<<key<<endl;
    }
    
}


int main(int argc, char const *argv[]){
    

    string arr[] = {"bad","bat","cat","cut","geek","geeks","zoo"};
    string brr[] = {"abc","mynameis","bad","bat","ca","cat","cut","geek","geeks","zoo","eek"};
    string cities[] = {"shimla","safari","jammu","delhi","jammu","dehradun"};
    struct trieNode *root = new trieNode();
    // for(auto x:arr){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // for(auto x:arr){
    //     inserrtNode(root,x);
    // }
    // string delarr[] = {"bad","zoo"};
    // for(auto x:delarr){
    //     root = delete_node(root,x,0);
    // }
    // // root = delete_node(root,delarr[0],0);
    // // cout<<search_node(root,brr[0])<<endl;
    // for(auto x:brr){
    //     if(search_node(root,x)){
    //         cout<<x<<" : "<<"Found";
    //     }
    //     else{
    //         cout<<x<<" : "<<"Not Found";
    //     }
    //     cout<<endl;
    // }
   
    //check_str(cities,6);
    string temp = "shimla";
    root = insert_Node_new(root,temp);
    
    prefix(root,temp);
    
    
    return 0;
}
