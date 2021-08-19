#include<bits/stdc++.h>

using namespace std;

struct valuesWeight{
    int weight;
    int value;
};
bool myCmp(struct valuesWeight a,struct valuesWeight b){
    double r1 = a.value/a.weight;
    double r2 = b.value/b.weight;
    return r1>r2;

}
double profitGain(struct valuesWeight arr[],int n,int knapWeight){
    double res = 0.0;
    sort(arr,arr+n,myCmp);
    for(int i=0;i<n;i++){
        if(arr[i].weight<=knapWeight){
            res += arr[i].value;
            knapWeight -= arr[i].weight;
        }
        else{
            res = res + ((arr[i].value) * ((double)knapWeight/arr[i].weight));
            return res;
        }
    }
    
}


int main(int argc, char const *argv[]){
    
    int n = 3,knapWeight = 50;
    struct valuesWeight arr[n];
    arr[0].weight = 30;
    arr[0].value = 120;
    arr[1].weight = 20;
    arr[1].value = 100;
    arr[2].weight = 10;
    arr[2].value = 60;
    cout<<profitGain(arr,n,knapWeight)<<endl;
    return 0;
}
