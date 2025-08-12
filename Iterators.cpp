//Iterators are used to access and perform operations on the values of containers
//these are like pointers which points to the address in the memory
//vector v= {2,3,5,6,7} iterator it points to address of the vector stored in memory
//v.begin() is iterator points to [2](starting element) and v.end() points to the next to last element ie.after [7]
//v.begin() ,v.end() do not points to value it only points to the address
//Declaring Iterator -> vector<int> ::iterator it;

#include<bits/stdc++.h>
using namespace std;
int main(){
    /* [1]
    vector<int> v={2,3,5,6,7};
    cout << "Size of vector : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i] <<" ";
    }
    cout<<endl;
    */
    /* [2]
    vector<int> :: iterator it=v.begin();//initializing iterator
    cout<<(*it)<<endl; // (*it) is used to access the value present in pointed address
    cout<<(*(it+1))<<endl;
    cout<<(*(it+2))<<endl;
    cout<<(*(it+3))<<endl;//iterator code is (*it)
    cout<<(*(it+4))<< endl;
    cout<<"Using Loop "<<endl;
    for(it=v.begin();it!=v.end();++it){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    */
    /* it++ and it+1 are different operations
    it++ moves to next iterator while it+1 moves to the next location
    As vectors occupy continuous memory loactions(continuity) it will be no issue but
    it++,it+1 makes difference in maps and sets where those are unordered(discontinuity) in memory  
    */
   /*[3]
   //iterator points to pair
   vector<pair<int,int>> v_p ={{1,2},{2,3},{3,4}} ;
   vector<pair<int,int>>  :: iterator it ;
   for(it=v_p.begin();it!=v_p.end();++it){
    cout<<(*it).first<<" "<<(*it).second<<endl; //type 1 of accessing vales of pair using it
}
for(it=v_p.begin();it!=v_p.end();++it){
    cout<<it->first<<" "<<it->second<<endl; //type 2 of accessing vales of pair using it
}
//(*it).first <=> it->first both are same
*/
//[4]
//SHORTCUT FOR ITERATORS TO SIMPLIFY THE LOOPS RANGE AUTO

vector<int> v={2,3,5,6,7};
cout << "Size of vector : "<<v.size()<<endl;
for(int value : v){ //range
    cout<<value<<" "; //value here is only the copy of that particular value it is not reference so it wont update even if we do value++
}
cout<<endl;
//example [4a]
for(int &value : v){  //try only value and &value to understand the difference
    value++; 
}
for(int value : v){
    cout<<value<<" "; 
}
cout<<endl;
//example [4b]
vector<pair<int,int>> vp={{1,2},{2,3}};
for(pair<int,int> value:vp){
    cout<<value.first<<" "<<value.second<<endl;
}
//auto keyword automatically takes the value without its datatype initialization 
//ex: auto a=1 ; or auto a=1.0; automatically declares the datatype to the variable
//using auto to avoid complex initialization of iterator rather direct using in loops as auto it.
cout<<"Using Auto printing the elements of vector pairs "<<endl;
//example [4c]
for(auto it=vp.begin();it!=vp.end();++it){
    cout<<(*it).first<<" "<<(*it).second<<endl;
}
}