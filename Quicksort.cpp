#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int l,int h){
    int pivot=arr[l];
    int i=l;
    int j=h;
    while(i<j){
        while(arr[i]<=pivot && i<=h-1)
        {
            i++;
        }
       // cout<<"Hello"<<endl;
        while(arr[j]>pivot && j>=l+1){
            j--;
        }
        if (i < j) swap(arr[i], arr[j]);
        // if(i<j){
        //     int temp=arr[i];
        //     int arr[i]=arr[j];
        //     arr[j]=temp;
        //}
    }
    // int temp=arr[j];
    // arr[j]=pivot;
    // pivot=arr[j];
    swap(arr[l], arr[j]);
    return j;
}
void qs(int arr[],int l,int h){
    if(l<h){
        int x=partition(arr,l,h);
        qs(arr,l,x-1);
        qs(arr,x+1,h);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    
    qs(arr,0,n-1);

    cout<<"AFTER QUICK SORT "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}