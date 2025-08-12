#include<bits/stdc++.h>
using namespace std;
void PrintpairVec(vector<pair<int,int>> v){
 cout <<"size : " <<v.size()<<endl;//v.size() is O(1)
 for(int i=0;i<v.size();++i){
    cout<<v[i].first<<" "<<v[i].second <<endl;
 }
 cout<<endl;
}
void PrintNestVec(vector<int> v){
cout <<"size : " <<v.size()<<endl;//v.size() is O(1)
 for(int i=0;i<v.size();++i){
    cout<<v[i]<<" ";
 }
 cout<<endl;
}
void vectorpair(){
    vector<pair<int,int>> v;
    //v={{1,2},{2,3},{4,5}};
    int n;
 cout << "enter the length of vector v: ";
 cin>>n;
 cout<<"Enter values : ";
 for (int i=0;i<n;i++){
      int x,y;
      cin >> x >> y;
      v.push_back({x,y});
 }
}
/*void NestVect(){
int N;
cout <<"Enter no. of vectors : ";
cin>>N;
vector<int> v[N];

for (int i=0;i<N;i++){
    cout << "Enter size of vector "<<i+1<<": ";
    int n;
    cin>>n;
    for(int j=0;j<n;j++){
        int x;
        cin>>x;
        v[i].push_back(x);
    }
    for (int i=0;i<N;i++){
     PrintNestVec(v[i]);
}
}

}
*/
int main(){
   
    //1 PrintpairVec(v);
    //NestVect();
    /*2  
    int N;
cout <<"Enter no. of vectors : ";
cin>>N;
vector<int> v[N];

for (int i=0;i<N;i++){
    cout << "Enter size of vector "<<i+1<<": ";
    int n;
    cin>>n;
    for(int j=0;j<n;j++){
        int x;
        cin>>x;
        v[i].push_back(x);
    }
}
    for (int i=0;i<N;i++){
     PrintNestVec(v[i]);

}
cout << v[1][1];
*/
/* 3 
int N;
cin>>N;
vector< vector<int> > v;
for(int i=0;i<N;i++){
vector<int> temp;
int n;
cin>>n;
for(int j=0;j<n;j++){
    int x;
    cin>>x;
    temp.push_back(x);
}
v.push_back(temp);
}
*/
// we can also implement in this way vector of vector without temp vector
int N;
cin>>N;
vector< vector<int> > v;
for(int i=0;i<N;i++){
int n;
cin>>n;
v.push_back(vector<int> ()) ; //empty vector is added for every i untill N times
for(int j=0;j<n;j++){
    int x;
    cin>>x;
    v[i].push_back(x); // n elements are added to inner vector i
}
}
v[0].push_back(10);//add 10 to nested vector at 0
v.push_back(vector<int> ());//add empty vector at last
for (int i=0;i<v.size();i++){
     PrintNestVec(v[i]);

}
}
/* -> In array of array it is fixed no. of rows and colums ie arr[10][10]
 -> In nested vectors only no.of rows is fixed when we declare it and no. of
columns varies and dynamic is vector<int> v[10] */