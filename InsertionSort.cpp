#include<bits/stdc++.h>
using namespace std;
//best case O(N) if already sorted or else avg and worst case O(N*N)
// OUTER LOOPS RUNS N TIMES 0 TO N-1 AT EACH iTH ITERATION FIRST iTH Elements of array 
// gets placed in order
//INNER LOOP CHECKS THE iTH Elements from i-1TH TO 0 and swaps if element is larger 
// i from 0 to n-1 and j from i to 1  
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    // for(int j=i;j>0;j--){
    //     if(arr[j]>arr[j-1]){
    //         break;
    //     }
    //     else{
    //        int temp=arr[j];
    //        arr[j]=arr[j-1];
    //        arr[j-1]=temp;
    //     }
    int j=i;
    while(j>0 && arr[j]<arr[j-1]){
        int temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp; 
        j--;  
    }
    }
    //cout<<"AFTER INSERTION SORT "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }
