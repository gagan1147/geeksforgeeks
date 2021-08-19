#include<bits/stdc++.h>

using namespace std;

struct charFreq{
    char ch;
    int freq;
};

struct node{
    int freq;
    char ch;
    struct node *left;
    struct node *right;
    node(char c,int f,struct node *l=NULL,struct node *r=NULL){
        ch = c;
        freq = f;
        left = l;
        right = r;
    }
};

struct compare{
    bool operator()(struct node *le,struct node *ri){
        return le->freq>ri->freq;
    }
};
void printCodes(struct node *root,string str){
    if(root->ch != '$'){
        cout<<root->ch<<" "<<str<<endl;
        return;
    }
    printCodes(root->left,str+"0");
    printCodes(root->right,str+"1");
}
void solve(struct charFreq arr[],int n){
    priority_queue<struct node*,vector<struct node*>,compare> min_heap;

    for(int i=0;i<n;i++){
        min_heap.push(new node(arr[i].ch,arr[i].freq));
    }
    while(min_heap.size()>1){
        struct node *min1 = min_heap.top();
        min_heap.pop();
        struct node *min2 = min_heap.top();
        min_heap.pop();
        struct node *temp = new node('$',min1->freq+min2->freq,min1,min2);
        min_heap.push(temp);
    }
    printCodes(min_heap.top(),"");
}



int main(int argc, char const *argv[]){
    
    int n = 4;
    struct charFreq arr[n];
    arr[0].ch = 'a';
    arr[0].freq = 30;

    arr[1].ch = 'd';
    arr[1].freq = 40;
    
    arr[2].ch = 'e';
    arr[2].freq = 80;
    
    arr[3].ch = 'f';
    arr[3].freq = 60;
    solve(arr,n);

    return 0;
}
