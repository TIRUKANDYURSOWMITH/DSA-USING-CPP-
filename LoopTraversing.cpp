#include<iostream>
using namespace std;
/*class Loopy{
public:
int traverse(int n){
    int i=1;
    while  (i<=n){
        cout << "i = " << i << endl;
        i++;
    }
    return 0;
}
};
*/
int main(){
/*Loopy obj;
//int x;
cout << "Enter upto where : " << endl;
cin >> x;
obj.traverse(x);
*/
//BREAK
int num[] = {1,2,3,4,5,6,7,8};
int x=6;
for (int n:num){
    if (n==x){
        cout << "Object Found : " << n << endl;
        break;
    }
    cout << "Checking : " << n << endl;
}
//CONTINUE
int a=1;
while (a <= 10){
if(a%2 == 0){
    continue;
}
cout << "Odd Number : " << a << endl;
a=a+1;
}

return 0;
}