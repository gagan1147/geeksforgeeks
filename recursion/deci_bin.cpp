#include<bits/stdc++.h>

using namespace std;

void bin(int n){
    if(n==0){
        return;
    }
    
    bin(n/2);
    cout<<n%2;
}
void hexa(int n){
    if(n==0){
        return;
    }
    
    hexa(n/16);

    if(n%16 == 10){
        cout<<"A";
    }
    else if(n%16 == 11){
        cout<<"B";
    }
    else if(n%16 == 12){
        cout<<"C";
    }
    else if(n%16 == 13){
        cout<<"D";
    }
    else if(n%16 == 14){
        cout<<"E";
    }
    else if(n%16 == 15){
        cout<<"F";
    }
    else{
        cout<<n%16;
    }

}



int main(int argc, char const *argv[])
{
    bin(65535);
    cout<<endl;
    hexa(65535);
    cout<<endl;
    return 0;
}
