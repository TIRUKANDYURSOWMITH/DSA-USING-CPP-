#include<bits/stdc++.h>
using namespace std;
//can be used as priority queue 
// can store duplicates
// O(log(n))
void print(multiset<string> &s){
    for(string value:s){
        cout<<value<<endl;
    }
}
void program(){
    //multiset problem from LUV youtube
   int t;
   cin>>t;
   while(t--){
    int N,k;
    cin>>N>>k;
    multiset<long long> bags;
    for(int j=0;j<N;j++){
        long long cndy_cnt;
        cin>>cndy_cnt;
        bags.insert(cndy_cnt);
    }
    long long tot_cand=0;
    for(int i=0;i<k;++i){
        auto last_it = (--bags.end()); 
        long long cndy_cnt=*last_it;
        tot_cand+=cndy_cnt;
        bags.erase(last_it);
        bags.insert(cndy_cnt/2);
    }
  cout<<"Total candies : "<<tot_cand<<endl;
   }

}
int main(){
    multiset<string> ms;
    ms.insert("abc");
    ms.insert("zpk");//O(log(n));
    ms.insert("opl");
    ms.insert("abc"); 

    // auto it=ms.find("abc");
    // if(it!=ms.end()){
    //     ms.erase(it);
    //     //cout<<"value present hehe"<<endl;
    // }
    // else cout<<"Value Not Found"<<endl;
    //  ms.erase("abc");
    // print(ms);
    program();
}