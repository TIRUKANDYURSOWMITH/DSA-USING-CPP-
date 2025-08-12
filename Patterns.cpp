#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void pattern1() {
	for (int i=0;i<5;i++){
		for (int j=0;j<5;j++){
			cout << "*" ;
		}
		cout << endl;
	}
}
void pattern2() {
	for (int i=1;i<6;i++){
		for (int j=0;j<i;j++){
			cout << "*" ;
		}
		cout << endl;
	}
}
void pattern3() {
	for (int i=2;i<=6;i++){
		for (int j=1;j<i;j++){
			cout << j ;
		}
		cout << endl;
	}
}
void pattern4() {
	for (int i=1;i<=5;i++){
		for (int j=0;j<i;j++){
			cout << i ;
		}
		cout << endl;
	}
}
void pattern5()
{
   for (int i=5;i>0;i--){
		for (int j=0;j<i;j++){
			cout << "*";
		}
		cout << endl;
	}
}
void pattern6()
{
   for (int i=5;i>0;i--){
		for (int j=1;j<=i;j++){
			cout << j;
		}
		cout << endl;
	}
}
void patternx1(){
	for (int i=5;i>0;i--){
		for (int j=1;j<=5;j++){
			if (j>=i){
			   cout << "*";
			}
			else{
				cout << " ";
			}
		}
		cout << endl;
	}
}
void pattern7(){
	int n=5;
	for (int i=1;i <=5;i++){
		for (int j=1;j<= 9;j++){
            if (j<=n-i){
				cout << " ";
			}
			else if(j>=n+i){
				cout << " ";
			}
			else {
				cout << "*";
			}
		}
		cout << endl;
	}
}
void pattern8(){
	int n=5;
	for (int i=5;i>0;i--){
		for (int j=1;j<=9;j++){
			if (j <=n-i){
				cout << " ";
			}
			else if (j>=n+i){
                   cout << " ";
			}
			else {
				cout << "*";
			}
		}
		cout << endl;
	}
}
void pattern9(){
	int n=5;
	for (int i=1;i <=5;i++){
		for (int j=1;j<= 9;j++){
            if (j<=n-i){
				cout << " ";
			}
			else if(j>=n+i){
				cout << " ";
			}
			else {
				cout << "*";
			}
		}
		cout << endl;
	}
	for (int i=5;i>0;i--){
		for (int j=1;j<=9;j++){
			if (j <=n-i){
				cout << " ";
			}
			else if (j>=n+i){
                   cout << " ";
			}
			else {
				cout << "*";
			}
		}
		cout << endl;
	}
	
	}
void pattern10(){
	int n=5;
	for(int i=1;i<=9;i++){
		for(int j=1;j<=5;j++){
		if (i<=5){
            if (j<=i){
				cout << "*";
			}
			else{
				cout << " ";
			}
		}
		else{
            if (j<= 2*n-i){
				cout << "*";
			}
			else{
				cout << " ";
			}
		}
	}
	cout << endl;
}
}
void pattern11(){
	int n=5;
	int a=1;
	for (int i=0;i<n;i++){
		if (i%2==0) a=1;
		else a=0;
		
		for( int j=0;j<=i;j++){
			cout << a;	
			a=1-a;
		    
		}
		cout << endl;
	}
}
void pattern12(){
	int n=4;
	for(int i=1;i<=n;i++){
		for(int j=1;j<2*n;j++){
			if(j<=i){
				cout << j << " ";
			}
			else if(j>=2*n-i){
                   cout << 2*n-j << " ";
			}
			else{
                cout<< " " << " " ;
			}
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
}
void pattern13(){
	int n=5;
	int a=1;
	for (int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
           cout << a << " ";
		   a=a+1;
		}
		cout << endl;
	}
}
void pattern14(){
	int n=5;
	for(int i=0;i<n;i++){
		for(char ch='A';ch<='A'+i;ch ++){
			cout << ch << " ";
	}
	cout<<endl;
	}

}
void pattern15(){
int n=5;
	for(int i=n;i>0;i--){
		for(char ch='A';ch<'A'+i;ch ++){
			cout << ch << " ";
	}
	cout<<endl;
	}
} 
void pattern16(){
int n=5;
char ch='A';
	for(int i=0;i<n;i++){
		
		for(int j=0;j<=i;j++){
			cout << ch ;
	}
	ch++;
	cout<<endl;
	}
}
void pattern17(){
	int n=5;
	char ch='A';
	for(int i=0;i<n;i++){
		ch='A';
		for(int j=1;j<2*n;j++){
			if(j<n-i){
              cout <<" ";
			}
			else if(j>n+i){
				cout<<" ";
			}
			else{
				//if(j<n) cout << ch+(n-j) ;
				//else if(j>n) cout << ch+(j-n);
				//else 
				ch=ch+i;
				if(j==n){
				cout <<ch;
				 }
				 else if(j>n){
				 int x=j-n;
			     ch=ch-x;
				 cout<<ch;
				 }
				 else{
					int x=n-j;
					ch=ch-x;;
					cout<<ch;
				 }
				 ch='A';
			}
	
	}
	cout<<endl;
	}
}
void pattern18(){
	int n=5;
	
	for(int i=4;i>=0;i--){
		char ch='A';
		ch=ch+i;
		for(int j=4;j>=i;j--){
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
}
void pattern19(){
	int n=5;
	for(int i=0;i<n;i++){
		for(int j=1;j<2*n;j++){
			if(j<=n-i){
				cout<<"*";
			}
			else if(j>=n+i){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	for(int i=n-1;i>=0;i--){
		for(int j=1;j<2*n;j++){
			if(j<=n-i){
				cout<<"*";
			}
			else if(j>=n+i){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
void pattern20(){
	int n=5;
	for(int i=n-1;i>=0;i--){
		for(int j=1;j<2*n;j++){
			if(j<=n-i){
				cout<<"*";
			}
			else if(j>=n+i){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		for(int j=1;j<2*n;j++){
			if(j<=n-i){
				cout<<"*";
			}
			else if(j>=n+i){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
void pattern21(){
	int n=4;
	for(int i=0;i<7;i++){
		for(int j=0;j<n;j++){
			if(i%2!=0){
				cout<<" ";
			}
			else{
				if(i==0){
					cout<<"*";
				}
				else if(i==6){
                    cout<<"*";
				}
                else{
				if(j==0) cout<<"*";
				else if(j==n-1) cout<<"*";
				else cout<<" ";
				}
			}
		}
		cout<<endl;
	}
}
void pattern22(){
	int n=4;
	for(int i=1;i<=7;i++){
		for(int j=1;j<=7;j++){
			    if (i==1 || i==7) cout<<"4"<<" ";
				else if (j==1 || j==7) cout<<"4"<<" ";
				else if (i==2 || i==6) cout<<"3"<<" ";
				else if (j==2 || j==6) cout<<"3"<<" ";
				else if (i==3 || i==5) cout<<"2"<<" ";
				else if (j==3 || j==5) cout<<"2"<<" ";
                else cout<<"1"<<" ";
			}
			cout<<endl;
		}
		
	}
void patternx2(){
	int n=5;
	for(int i=1;i<=n;i++){
		char ch='A';
		int a=1;
		for(int j=1;j<2*n;j++){
			if(j<=n-i){
            cout<<" ";
			}
			else if(j>=n+i){
              cout<<" ";
			}
			else{
				if(a==1){
				cout<<ch;
				ch++;
				a=a-1;
			}
			else{
              cout<<"*";
		      a=a+1;
			}
		}
	
	}
	cout<<endl;
}
}
int main()
{
	// pattern1();
	// cout << endl;
    // pattern2();
	// cout << endl;
    // pattern3();
	// cout << endl;
    // pattern4();
	// cout << endl;
    // pattern5();
	// cout << endl;
    // pattern6();
	// cout << endl;
	// patternx1();
	// cout << endl;
	// pattern7();
	// cout << endl;
	// pattern8();
	// cout << endl;
	// pattern9();
	// cout << endl;
	// pattern10();
	// cout << endl;
	// pattern11();
	// cout << endl;
	// pattern12();
	// cout << endl;
	// pattern13();
	// cout << endl;
	// pattern14();
	// cout << endl;
	// pattern15();
	// cout << endl;
	// pattern16();
	// cout << endl;
	// pattern17();
	// cout << endl;
	// pattern18();
	// cout << endl;
	// pattern19();
	// cout << endl;
	// pattern20();
	// cout << endl;
	// pattern21();
	// cout << endl;
	// pattern22();
	//cout<<endl;
	patternx2();
}