#include<bits/stdc++.h>
using namespace std;
//AT EACH INNER LOOP COMPARE CORRESPONDING ELEMENTS AND SWAP SUCH THAT (SMALLEST,LARGEST) POSITIONS
//FOR EACH ITERATION OF OUTER LOOP iTH LARGEST ELEMENTS GET PLACED AT THEIR RESPECTIVE iTH POSITION
//i from n-1 to 0 AND j from 0 to i-1
//TC is O(N*N) optimal approach O(N) such that if array is already sorted 

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    for(int i=n-1;i>0;i--){
        int doswap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                doswap=1;
            }
        
        }
        if(doswap==0){
            break;
        }
    }
    cout<<"AFTER BUBBLE SORT "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}