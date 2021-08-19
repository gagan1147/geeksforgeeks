#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    unordered_map<string,int> map1;
    map1["gagan"] = 0;
    map1["sid"] = 1;
    map1.insert({"abhi",4});
    for(auto x:map1){
        cout<<x.first<<" : "<<x.second<<endl;
    }
    cout<<map1.count("ddd");
    return 0;
}
