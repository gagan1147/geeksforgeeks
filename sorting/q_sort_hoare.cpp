
#include<bits/stdc++.h>

using namespace std;

int hpartition(int arr[],int l,int h){
    int pivot = arr[l];
    int i=l-1,j=h+1;
    while (true){
        do
        {
            i++;
        } while (arr[i]<pivot);
        do
        {
            j--;
        } while (arr[j]>pivot);
        if(i>=j){
            return j;
        }
        swap(arr[i],arr[j]);
    }
    
   
    
}



void q_sort(int arr[],int l,int r){

    if (l<r){
        int p = hpartition(arr,l,r);
        q_sort(arr,l,p);
        q_sort(arr,p+1,r);
    }
}


int main(int argc, char const *argv[])
{
    int arr[] = {8,4,7,9,3,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    q_sort(arr,0,n-1);
    //hpartition(arr,0,n-1);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}