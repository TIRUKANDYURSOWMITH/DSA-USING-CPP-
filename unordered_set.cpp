// #include<iostream>
// #include <unordered_set>
#include<bits/stdc++.h>3
using namespace std;
//all the insertions accessing finding erasing are O(log(n))
//unordered_set s wont hold complex data structures like pairs,set etc only can keep int string 
//because it uses 
void print(unordered_set<int> s){
   cout << "Elements present in unordered set : ";
    for (auto  it=s.begin();it !=s.end();it++){
        cout << *it <<" " ;
    }
    cout << endl; 
}
void program(){
    /*Given N strings,Q Queries
    In each Query you are given a string 
    Print Yes if String is Present
    else print no

    N<=10^6
    Q<=10^6
    |s|<=100
    */
   unordered_set<string> s;
   cout<<"N : ";
   int N;
   cin>>N;
   cout<<"Enter strings :"<<endl;
   for(int i=0;i<N;++i){
    string str;
    cin>>str;
    s.insert(str);
   }
   cout<<endl;
   cout<<"Q : "<<endl;
   int q;
   cin>>q;
   cout<<"Enter queries : "<<endl;
   for (int i=0;i<q;++i){
    string qur;
    cin>>qur;
    auto it=s.find(qur);
    if(it!=s.end()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   }
   
}
int main(){
    unordered_set<int> s;
    for (int i=1;i<=10;i++){
        s.insert(i);
    }
    // auto it=s.find(8);
    // print(s);
    program();
}