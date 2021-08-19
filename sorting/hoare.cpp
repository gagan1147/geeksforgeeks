#include<bits/stdc++.h>

using namespace std;

void hoare(int arr[],int l,int h){
    int pivot = arr[l];
    int i=l-1,j=h+1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i]<pivot);
        do
        {
            j--;
        } while (arr[j]>pivot);
        if(i>=j){
            
            return;
        }
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
}



int main(int argc, char const *argv[])
{
    int arr[] = {5,3,8,4,2,7,1,10};
    int n = sizeof(arr)/sizeof(arr[0]);
     for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    hoare(arr,0,n-1);
     for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
