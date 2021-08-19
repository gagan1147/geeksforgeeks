#include<bits/stdc++.h>

using namespace std;


double findMedian(int arr1[],int arr2[],int n1,int n2){
    int begin1 = 0,end1 = n1;
    while(begin1<=end1){
        int i1 = (begin1+end1)/2;
        int i2 = (n1+n2+1)/2 - i1;
        int min1 = (i1==n1)?INT8_MAX:arr1[i1];
        int max1 = (i1==0)?INT8_MIN:arr1[i1-1];
        int min2 = (i2==n2)?INT8_MAX:arr2[i2];
        int max2 = (i2==0)?INT8_MIN:arr2[i2-1];
        if(max1<=min2 && max2<=min1){
            if((n1+n2)%2==0){
                return ((double)(max(max1,max2)+min(min1,min2))/2);
            }
            else{
                return  (double)(max(max1,max2));
            }
        }
        else if(max1>min2){
            end1 = i1-1;
        }
        else{
            begin1 = i1+1;
        }
    }
}
/*
int median_2(int a, int b){ 
    return ( a + b ) / 2; 
}
     
int median_3(int a, int b, int c){
        return a + b + c - max(a, max(b, c))
                         - min(a, min(b, c));
                          }
    
int median_4(int a, int b, int c, int d){
    int Max = max( a, max( b, max( c, d ) ) );
    int Min = min( a, min( b, min( c, d ) ) );
    return ( a + b + c + d - Max - Min ) / 2;
}


int medianSingle(int arr[], int n){
       if (n == 0)
          return -1;
       if (n%2 == 0)
            return (double)(arr[n/2] + arr[n/2-1])/2;
       return arr[n/2];
}

int findMedianUntil(int A[], int N, int B[], int M){
    if (N == 0){
      return medianSingle(B, M);
    }

    if (N == 1)
    {

        if (M == 1)
            return median_2(A[0], B[0]);
 
        if (M & 1)
            return median_2( B[M/2], median_3(A[0], B[M/2 - 1], B[M/2 + 1]) );

        return median_3( B[M/2], B[M/2 - 1], A[0] );
    }
 
    else if (N == 2)
    {

        if (M == 2)
            return median_4(A[0], A[1], B[0], B[1]);
 

        if (M & 1)
            return median_3 ( B[M/2],
                         max(A[0], B[M/2 - 1]),
                         min(A[1], B[M/2 + 1])
                       );

        return median_4 ( B[M/2],
                     B[M/2 - 1],
                     max( A[0], B[M/2 - 2] ),
                     min( A[1], B[M/2 + 1] )
                   );
    }
 
    int idxA = ( N - 1 ) / 2;
    int idxB = ( M - 1 ) / 2;

    if (A[idxA] <= B[idxB] ){
      return findMedianUntil(A + idxA, N/2 + 1, B, M - idxA );
    }
    return findMedianUntil(A, N/2 + 1, B + idxA, M - idxA );

}

int findMedian( int A[], int N, int B[], int M )
{
    if (N > M)
       return findMedianUntil( B, M, A, N );
 
    return findMedianUntil( A, N, B, M );
}
*/
int main(int argc, char const *argv[])
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {3,4,5,6,7,8};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    cout<<findMedian(arr1,n1,arr2,n2)<<endl;
    return 0;
}
