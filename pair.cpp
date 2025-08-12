// reference and copy concept also covered 

#include<bits/stdc++.h>
using namespace std;
int main(){
 pair<int,string> p;
 //pair<vector,int> a;
 //we can keep any two data types or any two containers as a pair and can keep container and datatype also;
 //p=make_pair(2,"abc");
 pair<int,string> p1=p;
 p1.first = 3;
 p1.second ="mom";
 p = {6 , "xyz"}; //initializing the values
 cout << p1.first << " " << p.second << endl;
 //output will be 3(p1.first),xyz(p.second)
 // this is copy p1=p;
 //next one is reference &p1=p;
 pair<int,string> &p2 =p;
 p2.first = 8;
 //p2.second="gym";
 cout << p.first << " " << p.second << endl;
 //out will be referenced one p2.first = p.first here

 int a[] ={1,2,3};
 int b[] ={2,3,4};
 pair<int,int> p_array[3];
 p_array[0]={1,2};
 p_array[1]={2,3};
 p_array[2]={3,4};
 for(int i=0;i<3;i++){
    cout << p_array[i].first << " " << p_array[i].second << endl;
 }
 //using pair here for swaping the 1st element with 3rd element in both arrays simulataneously using the pair
 swap(p_array[0],p_array[2]);
 
 for(int i=0;i<3;i++){
    cout << p_array[i].first << " " << p_array[i].second << endl;
 }
}
