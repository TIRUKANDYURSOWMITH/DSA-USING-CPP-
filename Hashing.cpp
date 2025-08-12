#include<bits/stdc++.h>
using namespace std;
//Hashing is combination of steps,presorting and fetching
//Hashing only for numbers below 10^9
 void Numberhashing(){
    int n;
    cout<<"Enter array size : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Values into the array : "<<endl;
    for (int i=0;i<n;i++){
     cin>>arr[i];
    }
    //precompute
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    //fetching
    int q;
    cout<<"Enter the No. of Query's : "<<endl;
    cin>>q;
    cout<<"Enter the each Query : "<<endl;
    while (q--){
        int num;
        cin>>num;
        cout<<hash[num]<<endl;
    }
}
void CharacterHashing1(){ //FOR UPPER[s[i]-'A'] CASE AND  LOWER[s[i]-'a'] CASE SEPERATELY
string s;
cout<<"Enter string : "<<endl;
cin>>s;
int hash[26]={0};
for(int i=0;i<s.length();i++){
hash[s[i]-'a']++;
}
//fetching
int q;
cout<<"Enter the No. of Query's : "<<endl;
cin>>q;
cout<<"Enter character queries: "<<endl;
while(q--){
    char c;
    cin>>c;
    //fetch
    cout<<hash[c-'a']<<endl;
}

}
void CharacterHashing2(){//FOR UPPER AND LOWER CASE MIXED
string s;
cout<<"Enter string : "<<endl;
cin>>s;
int hash[256]={0};
for(int i=0;i<s.length();i++){
hash[s[i]]++;
}

//fetching
    int q;
    cout<<"Enter the No. of Query's : "<<endl;
    cin>>q;
    cout<<"Enter character queries: "<<endl;
    while (q--){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }
   
}

// Difference between array hashing and hashing using the map: hashing need to specify the largest value 
// Array hashing no need to speacify the limit only initialize the datatypes
void MapIntHashing(){ //O(log n)
    int n;
    cout<<"Enter array size : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Values into the array : "<<endl;
    for (int i=0;i<n;i++){
     cin>>arr[i];
    }
    //precompute
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]+=1;
    }
    //fetching
    int q;
    cout<<"Enter the No. of Query's : "<<endl;
    cin>>q;
    cout<<"Enter the each Query : "<<endl;
    while (q--){
        int num;
        cin>>num;
        cout<<mp[num]<<endl;
    }
}
// for map O(log n)[Storing(i.e. insertion) and fetching(i.e. retrieval) in a C++ map]
// the unordered_map in C++ and HashMap in Java, both take O(1) time complexity to perform storing(i.e. insertion) and fetching(i.e. retrieval). 
// it is valid for the best case and the average case. 
// worst case, this time complexity will be O(N) for unordered_map
// Our first priority will be always to use unordered_map and then map. 
// If unordered_map gives a time limit exceeded error(TLE), we will then use the map.
// The time complexity in the worst case is O(N) because of the internal collision for unordered map
// Pre storing: hash[arr[i]%10] += 1 and Fetching: hash[number%10]

/*
In the map data structure, the data type of key can be anything like int, double, pair<int, int>, etc. 
But for unordered_map the data type is limited to integer, double, string, etc.
 We cannot have an unordered_map whose key is pair<int, int>.
*/

/*
if we are applying linear chaining and division rule and 
we find that all elements of an array get stored in a single index, 
then we will call it a case of collision.
*/

/*
Whatever method the map is using, if all the elements go to the same hash index, we will call it a case of collision.
*/
void UnMapCharHashing(){

string s;
cout<<"Enter string : "<<endl;
cin>>s;
unordered_map<char,int> ump;
for(int i=0;i<s.length();i++){
ump[s[i]]++;
}

//fetching
    int q;
    cout<<"Enter the No. of Query's : "<<endl;
    cin>>q;
    cout<<"Enter character queries: "<<endl;
    while (q--){
        char c;
        cin>>c;
        cout<<ump[c]<<endl;
    }
}

void code1(){
    // Given an array, we have found the number of occurrences of each element in the array.
       
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    cout<<"Enter the values of array : "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
        
    }
    for(auto x:mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
}
void code2(){
    //Given an array of size N. Find the highest and lowest frequency element.
    int n;
    int min=INT_MAX;
    int max=INT_MIN;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    cout<<"Enter the values of array : "<<endl;
    int arr[n];
    int small,large;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
        
    }
    for(auto x:mp){
        if(x.second<=min){
            min=x.second;
            small=x.first;
        }
        if(x.second>=max){
            max=x.second;
            large=x.first;
        }
}
cout<<"smallest frequency element : "<<small<<" Largest frequency element : "<<large<<endl;
}

int main(){
    //Numberhashing();
    //CharacterHashing1();
    //CharacterHashing2();
    //MapIntHashing();
     //UnMapCharHashing();
     //code1();
     code2();
}