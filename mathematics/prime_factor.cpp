#include<bits/stdc++.h>

using namespace std;

void factors(int num){
    cout<<1<<" ";
    if(num%2==0){
        cout<<2<<" ";
    }
    
    if(num%3==0){
        cout<<3<<" ";
    }
    for(int i=5;i*i<=num;i=i+6){
        if(num%i == 0){
            cout<<i<<" ";
        }
        if(num%(i+2)==0){
            cout<<i+2<<" ";
        }
    }
}

bool isPrime(int num){
    if(num==1){
        return false;
    }
    if(num==2 || num ==3){
        return true;
    }
    if(num%2==0 || num%3==0){
        return false;
    }
    for(int i=5;i*i<=num;i=i+6){
        if(num%i==0 || num/(i+2)==0){
            return false;
        }
    }
    return true;
}

int naive(int num){
    for(int i=2;i<num;i++){
        if(isPrime(i)){
            int x = i;
            while(num%x==0){
                cout<<i<<" ";
                x = x*i;
            }
        }
    }
}
void efficient(int num){
    if(num<=1){
        return ;
    }
    while(num%2==0){
        cout<<2<<" ";
        num = num/2;
    }
    while(num%3==0){
        cout<<3<<" ";
        num = num/3;
    }
    for(int i=5;i*i<=num;i=i+6){
        while(num%i==0){
            cout<<i<<" ";
            num = num/i;
        }
        while(num%(i+2)==0){
            cout<<(i+2)<<" ";
            num = num/(i+2);
        }
    }
    if(num>3){
        cout<<num<<endl;
    }
}


int main(int argc, char const *argv[])
{
    // factors(12);
    // naive(450);
    efficient(450);
    return 0;
}
