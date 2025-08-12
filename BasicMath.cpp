#include<bits/stdc++.h>
using namespace std;
void countDigits(){
int cnt=0;
int num;
cout<<"enter number : ";
cin>>num;
while(num>0){
    num = num/10;
    cnt++;
}
cout<<"Count of Digits of number : "<<cnt <<endl;
}
void ReverseNum(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    int rev=0;
    int a=0;
    while(n>0){

        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    cout<<"Reverse of the number : "<<rev<<endl;
}
void PalindromeCheck(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    int x=n;
    int rev =0;
    int a=0;
    while(n>0){
        
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    if(rev == x){
        cout<<"The number is Palindrome";
    }
    else{
         cout<<"The number is not Palindrome";
    }
    cout<<endl;
}
void GcdorHcf(){
    //There are multiples ways to perform this refer to strivers sheet
    int a;
    int b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    int l,s;
    int n=1;
    if(a>b){
      l=a;
      s=b;
    }
    else{
        l=b;
        s=a;
    }
    while(n>0){
        //cout<<n<<" "<<l<<" "<<s<<"  ------  ";
        n=l%s;
        l=s;
        s=n;
        //cout<<n<<" "<<l<<" "<<s<<endl;
    }
    cout<<"GCD of "<<a<<" "<<b<<" : "<<l<<endl;
}
void ArmstromgNum(){

    int n;
    cout<<"Enter number : ";
    cin>>n;
    int nm=n;
    int x=0;;
    int sum=0;
    int len=to_string(n).length();
    // cout<<len<<endl;
    // int y=2;
    // int a=pow(y,len);
    //cout<<a<<endl;
    while(n>0){
        x=n%10;
        sum+=pow(x,len);
        n=n/10;
        //cout<<x<<" "<<sum<<" "<<n<<" "<<endl;
    }
    if(nm==sum){
        cout<<"The number is Armstrong number ";
    }
    else{
        cout<<"The number is not Armstrong number ";
    }
    cout<<endl;
}
void Divisors(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    for (int i=1;i<=n/2;i++){
        if (n%i==0){
            cout<<i<<" ";
        }
        else continue;
    }
    cout<<n<<endl;;
}
void CheckPrime(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int c=0;
    for (int i=2;i<=n/2;i++){
        if (n%i==0){
           c=c+1; 
        }
        else continue;
    }
    if(c==0) cout<<n<<" is a Prime";
    else  cout<<n<<" is not a Prime";
cout<<endl;
}
int main(){
countDigits();
ReverseNum();
PalindromeCheck();
GcdorHcf();
ArmstromgNum();
Divisors();
CheckPrime();
}