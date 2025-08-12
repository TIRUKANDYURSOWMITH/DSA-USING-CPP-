#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void Recprint1(){
    if(cnt == 3) return ;
    cout<<cnt<<endl;
    cnt++;
    Recprint1();
}
void Recprint2(int i,int n){
    if(i>=n) return ;
    cout<<"INDIA"<<endl;
    Recprint2(i+1,n);
}
void Recprint3(int i,int n){
if (i>n) return;
cout<<i<<endl;
Recprint3(i+1,n);
}
void Recprint4(int n,int i){
if (n<i) return;
cout<<n<<endl;
Recprint4(n-1,i);
}
int sum=0;
void Recprint5(int x){
    if (x==0) {
        cout<<sum<<endl;
        return;
    }
    sum+=x;
    Recprint5(x-1);
}
int fact=1;
void Recprint6(int x){
    if (x==0) {
        cout<<fact<<endl;
        return;
    }
    fact*=x;
    Recprint6(x-1);
}
void printArr(int rev[],int n){
    cout<<"The Reversed Array is :- "<<endl;
for(int i=0;i<n;i++){
        cout<<rev[i]<<endl;
    }
}
void Recprint7(int arr[],int n){
    int rev[n];
 for(int i=n-1;i>=0;i--){
    rev[n-i-1]=arr[i];
 }
 printArr(rev,n);
}
bool Recprint8(int i,string s){
   if(i>=(s.length())/2) return true;
   if(s[i]!=s[s.length()-i-1]) return false;
   return Recprint8(i+1,s);
}
int Recprint9(int n){//worst case using recursion 
   if (n<=1){
    return n;
   }
   int last=Recprint9(n-1);
   int slast=Recprint9(n-2);
   //return Recprint9(n-1)+Recprint9(n-1);
   return last+slast;
}
int main(){
//Recprint1();
//Recprint2(0,5);
//Recprint3(1,10);
//Recprint4(10,1);
//Recprint5(10);
//Recprint6(6);
//int arr[] = {5,4,3,2,1};
//Recprint7(arr,5);
/*
string s="maduamam";
//auto palindrome = Recprint8(0,s);
cout<<Recprint8(0,s);
cout<<endl;
*/
int n=5;
for(int i=0;i<=5;i++){
cout<<Recprint9(i)<<" ";
}
}