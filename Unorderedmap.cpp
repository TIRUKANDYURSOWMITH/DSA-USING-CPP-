#include<bits/stdc++.h>
using namespace std;
//In multimap we can add multiple keys
void Print(unordered_map<int,string> &m){
cout<< "Size of map : "<<m.size()<<endl;
for (auto &pr:m){
cout<< pr.first << " "<<pr.second<<endl;
}
}
void Program(){
/* Given n strings and Q queries
In each query you are given a string 
find the frequency of each string 
N<=10^6
|s|<=100
q<=10^6*/
unordered_map<string,int> m;
int n;
cout<<"Enter the N value : ";
cin>>n;
cout<<endl;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    m[s]++;
}
cout<<endl;
int q;
cout<<"Enter No. of queries : ";
cin>>q;
while(q--){
    string s;
    cin>>s;
    cout<<m[s]<<endl;
}
}
int main() {
    //All the functions of orderedmaps and unorderedmaps are same
    //Differences 
    //1.inbuilt implementation //hashtable is used internally key value hashing
    //2.Time Complexity
    //3.valid keys datatype
    unordered_map< int,string> u;
    u[1]="abc"; //O(1)
    u[3]="vgk"; //O(1)
    u[6]="bjr";
    u[2]="elp";
    

    u.erase(3);
    auto it=u.find(9); //O(log(n))
    if (it==u.end()){
       cout<<"NO VALUE";
    }
    else{
     cout<<(*it).first<<" "<<(*it).second;
   }
    cout<<endl;
    //Print(u);
    /* unordered_map<pair<int,int>,string>  will give error as it cannot built like that as it is built on hash
    map<pair<int,int>,string> is possible it can built
    */
   Program();
}
