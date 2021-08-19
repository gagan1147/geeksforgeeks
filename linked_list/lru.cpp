#include<bits/stdc++.h>

using namespace std;


struct node{
    struct node *next;
    struct node *prevv;
    int key;
    int value;
    node(int k,int v){
        key = k;
        value = v;
        next = NULL;
        prevv = NULL;
    }
};


class LRUDesign{
    public:
    unordered_map<int, struct node*> map1;
    struct node *head;
    struct node *tail;
    int capacity,count;

    LRUDesign(int c){
        capacity = c;
        head = new node(0,0);
        tail = new node(0,0);
        head->next = tail; 
		tail->prevv = head; 
		head->prevv = NULL; 
		tail->next = NULL; 
		count = 0; 
    }
    void deleteNode(struct node *curr){
        curr->prevv->next = curr->next;
        curr->next->prevv = curr->prevv;
    }
    void addTohead(struct node *curr){
        curr->next = head->next;
        curr->next->prevv = curr;
        curr->prevv =  head;
        head->next = curr;
    }
    int get(int key){
        if(map1[key]){
            struct node *new_node = map1[key];
            int res = new_node->value;
            deleteNode(new_node);
            addTohead(new_node);
            cout<<"Value : "<<res<<" for the key: "<<key<<endl;
            return res;
        }
        cout<<"Did'nt found the value: for the key: "<<key<<endl;
        return -1;
    }
    void set(int key,int value){
        if(map1[key]){
            struct node* new_node = map1[key];
            new_node->value = value;
            deleteNode(new_node);
            addTohead(new_node);
        }
        else{
            struct node* new_node = new node(key,value);
            map1[key] = new_node;
            if(count<capacity){
                count++;
                addTohead(new_node);
            } 
            else{
                map1.erase(tail->prevv->key);
                deleteNode(tail->prevv);
                addTohead(new_node);
            }
        }
    }

};



int main(int argc, char const *argv[])
{
    
    	LRUDesign cache(2); 

		// it will store a key (1) with value 
		// 10 in the cache. 
		cache.set(1,10);

		// it will store a key (2) with value 20 in the cache. 
		cache.set(2, 20); 
		cout<<"Value for the key: 1 is " << cache.get(1)<<endl; // returns 10 

		// removing key 2 and store a key (3) with value 30 in the cache. 
		cache.set(3, 30); 

		cout<<"Value for the key: 2 is " << cache.get(2)<<endl; // returns -1 (not found) 

		// // removing key 1 and store a key (4) with value 40 in the cache. 
		cache.set(4, 40); 
		cout<<"Value for the key: 1 is " << cache.get(1)<<endl; // returns -1 (not found) 
		cout<<"Value for the key: 3 is " << cache.get(3)<<endl; // returns 30 
		cout<<"Value for the key: 4 is " << cache.get(4)<<endl; // return 40 
						
		return 0;
}
