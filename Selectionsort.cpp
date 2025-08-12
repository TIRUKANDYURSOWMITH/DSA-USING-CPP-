#include<bits/stdc++.h>
using namespace std;
//AT EACH INNER LOOP CHECKING SMALLEST OF THE UNSORTED ARRAY AND SWAP WITH THE iTH ELEMENT 
//FOR EACH OUTER LOOP WE GET SORTED UPTO iTH ELEMENT
// i from 0 to n-1 and j from i+1 to n-1 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
    cout<<"AFTER SELECTION SORT "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

