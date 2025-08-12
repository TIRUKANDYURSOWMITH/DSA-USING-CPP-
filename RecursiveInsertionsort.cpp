#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[],int i,int n){
    if(i==n) return;
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
    }
    // for(int j=i+1;j>=0;j--){  INCOMPLTE USING FOR LOOP
    //    if(arr[j-1]>arr[j]){    COULD'NT GET OUTPUT USING FOR LOOP
    //     int temp=arr[j-1];
    //     arr[j]=arr[j-1];
    //     arr[j-1]=temp;
    //    }
    // }
    insertion(arr,i+1,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}