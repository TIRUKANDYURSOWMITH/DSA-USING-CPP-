//map is a data structure which maps key to the value 
//map keys must be unique
// elements of the map are stored in sorted order with respect to the keys
// internal implementation of maps is using red black trees which are self balanced trees
// maps are uncomtinuos nature ,can't do it+1 only 'i++' can be done
// accessing and inserting,searching time complexity O(log(n))
#include<bits/stdc++.h>
using namespace std;
void Print(map<int,string> &m){
    cout<< "Size of map : "<<m.size()<<endl;
    for (auto &pr:m){
    cout<< pr.first << " "<<pr.second<<endl;
}
}
void Program(){
    map<string,int> ms;
cout<<"Enter N :";
int N;
cin>>N;
cout<<"Enter values: "<<endl;
for(int i=0;i<N;++i){
    string s;
    cin>>s;
    //ms[s]=ms[s]+1;
    ms[s]++;
}
for(auto &it:ms){
  cout<<it.first<<" "<<it.second<<endl;
}
}

int main()
{
    //[1]
    map<int,string> m;
    m[1]="abc";//O(log(n))
    m[2]="abc";
    m[3]="xyz";
    m[6];// [takes O(log(n))] by defauly value will be 0 if map is <int,int> or else empty string if map is <int,string.
    m.insert({4,"afg"});
    //m.erase(3);
    //auto it=m.find(9); //O(log(n))
    //if (it==m.end()){
       // cout<<"NO VALUE";
    //}
    //else{
//  cout<<(*it).first<<" "<<(*it).second;
   // }
    //cout<<endl;
    
/*we can also delete or erase value using the iterator that points to the address where the element present*/
//auto am=m.find(3);
//if (am!=m.end())  m.erase(am);
//m.clear();
Print(m);

/*
if map<string,string> mp;
m["abcd"]="abcd"  //then Time complexity of inserting will be O(sizeofstring*log(n))
*/


/* [PRINTING THE MAP DIFFERENT WAYS ]
    //map<int,string> ::iterator it;
    for(auto it=m.begin();it!=m.end();++it){
    cout<<(*it).first<<" "<<(*it).second<<endl;//maps will get printed in sorted order of keys(if keys are string will be sorted based on lexographical order[dictioanry way])
}
cout<<endl<< " Using Auto"<<endl;

for (auto &pr:m){
    cout<< pr.first << " "<<pr.second<<endl;
}
cout<<endl;
*/

/* Given N strings arrange them in unique and laxographical order with their frequency
N<=10^5 and S<=100 size of string*/
Program();

}  