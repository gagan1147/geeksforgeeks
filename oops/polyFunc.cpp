#include<bits/stdc++.h>
using namespace std;

class base{

    public:
    int add(int a,int b){
        return a+b;
    }
    float add(float a,float b,int c){
        return a+b+c;
    }

};



int main(int argc, char const *argv[]){
    
    base *base1;
    cout<<base1->add(4,3)<<endl;
    cout<<base1->add(4.2,3.5,7)<<endl;

    return 0;
}
