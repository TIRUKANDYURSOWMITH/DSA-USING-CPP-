#include<bits/stdc++.h>
using namespace std;
void PrintVec(vector<string> v){
 cout <<"size : " <<v.size()<<endl;//v.size() is O(1)
 for(int i=0;i<v.size();++i){
    cout<<v[i]<<" ";
 }
 cout<<endl;
}

int main(){
   // vector<pair<int,int>> pv;
 
   //vector<string> vs;
/*vector<int> v;
 int n;
 cout <<"Enter the length of the Vector : " ;
 cin >> n;
 cout <<endl;
 cout <<"Enter the values to the vector : ";
 for(int i=0;i<n;++i){
    int x;
    cin >> x;
    PrintVec(v);
    v.push_back(x); // is O(1)
 }

 PrintVec(v);

// gives an vector with 10 TIMES whose value is 3
 vector<int> v1(10,3);
 v1.push_back(7);
 v1.pop_back();
 v1.pop_back();
 PrintVec(v1);

 // copying the vector b=a 
 // reference{actual vector is passed} the vector &b=a  
 // understand 2 concepts 
 vector<int> a;
 a.push_back(6);
 a.push_back(7);
 vector<int> b=a;// copy is O(n)
 b.push_back(9);
 b.push_back(2);
 PrintVec(a);
 
 PrintVec(b);
 */
 vector<string> vs;
 int n;
 cout << "enter the length of vector vs: ";
 cin>>n;
 cout<<"Enter values : ";
 for (int i=0;i<n;i++){
      string s;
      cin>>s;
      vs.push_back(s);
 }
 PrintVec(vs);
}