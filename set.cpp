#include<bits/stdc++.h>
using namespace std;
// all the accessing finding erasing inserting are O(log(n)) as it internally uses red back trees
void print(set<string> &s){
    for(string value:s){
        cout<<value<<endl;
    }
    //cout<<endl;
    // for(auto it=s.begin();it!=s.end();++it){
    // cout<<(*it)<<endl;
    // }
}
void program(){
    /*
    given N strings
    Print uniques strings in lexographical order
    N<=10^5;
    |s|<=10000;
     */
    set<string> s;
    int N;
    cout<<"Enter N value : ";
    cin>>N;
    cout<<endl;
    for(int i=0;i<N;++i){
      string a;
      cin>>a;
      s.insert(a);
    }
    cout<<endl;
    for(auto it:s){
        cout<<(*it)<<endl;
    }
}
int main(){
    set<string> s;
    //Values are stored in ascending order
    s.insert("abc");
    s.insert("zpk");//O(log(n));
    s.insert("opl");
    s.insert("abc");
    // auto it=s.find("abc");
    // if(it!=s.end()){
    //     s.erase(it);
    // }
    // else cout<<"Value Not Found"<<endl;
    //s.erase("opl");
    //print(s);
    program();
}