#include<bits/stdc++.h>
using namespace std;
void bubble(int arr[], int n){
    if(n==1) return;
    //int didSwap = 0; optimal purpose
  for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        //didswap =1 optimal purpose
    }
    //if(didswap == 1) return;
  }
    bubble(arr,n-1);
  

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}