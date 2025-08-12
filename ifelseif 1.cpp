#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter the value of X : " <<endl ;
    cin >> x;
    if(x >= 90){
        cout << "GRADE A" <<endl ; }
    else if(x >= 80){
        cout << "GRADE B" <<endl; }
    else if(x >= 70){
        cout << "GRADE C" <<endl; }
    else if(x >=60 ) {
        cout << "GRADE  D" <<endl ;   }
    else{
        cout << "FAIL " <<endl ;    }
    return 0;
}