#include<iostream>
using namespace std;
class Code{
public:
void mymethod(int x){
    cout << "This is mymethod output: " << x <<endl;
    switch(x){
        case 1:
        cout << "MONDAY" ;
        break;
        case 2:
        cout << "TUESDAY" ;
        break;
        case 3:
        cout << "WEDNESDAY" ;
        break;
        case 4:
        cout << "THURSDAY" ;
        break;
        case 5:
        cout << "FRIDAY" ;
        break;
        case 6:
        cout << "SATURDAY" ;
        break;
        case 7:
        cout << "SUNDAY" ;
        break;
        default :
        cout << "INVALID"
        
    };
}
};
int main(){
Code obj;
int day ;
cout << "Enter the value : " <<endl ;
cin >> day;
obj.mymethod(day);
return 0;
}

