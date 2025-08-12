#include<bits/stdc++.h>
using namespace std;
void program(){
    map<int,multiset<string> > m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int marks;
        string name;
        cin>>name>>marks;
        m[marks].insert(name);
    }
    cout<<"printing the Data : "<<endl;
    auto cur_it=--m.end();
    while(true){
        auto &students =(*cur_it).second;
        auto marks=(*cur_it).first;
        for(auto &student:students){
            cout<<student<<" "<<marks<<endl;
        }
        if (cur_it == m.begin()) break;
        cur_it--; 
    }
}
int main(){
    /*[1]
    map<pair<int,int>,int> m; //In maps the data is stored in sorted order
    pair<int,int> p1,p2;
    p1={2,2};
    p2={2,1};
    cout<<(p2>p1); //comparing which pair is greater such that that order is followed in maps
    set<int> s1={1,2,3};
    set<int> s2={2,3,4};
    cout<<(s1<s2); //first elements of set are compared to find which is greater 
*/
/*[2]
map<pair<string,string>,vector<int>> m;
int n;
cin>>n;
for(int i=0;i<n;i++){
    string fn,ln;
    int ct;
    cin>>fn>>ln>>ct;
    for(int j=0;j<ct;j++){
        int x;
        cin>>x;
        m[{fn,ln}].push_back(x);
    }
}
cout<<"Printing Elements of nested STL : "<<endl;
for(auto &pr:m){
    auto &full_name=pr.first;
    auto &list=pr.second;
    cout<<full_name.first<<" "<<full_name.second<<endl;
    cout<<list.size()<<endl;
    for(auto i=0;i<list.size();++i){  // for(auto element:list){ cout<<element<<" "; }
        cout<<list[i]<<" ";
    }
    cout<<endl;

}
*/
program();
}