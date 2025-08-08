#include<bits/stdc++.h>
using namespace std;

inline void Add(int x, int y) {
cout << x + y << endl;
}
inline void Sub(int x, int y ) {
cout << x - y << endl;
}
inline void Multi(int x, int y ) {
cout << x * y << endl;
}
int main (){
	int n1,n2;
	ch n;
	cout << "Enter the two numbers : " << endl;
	cin >> n1 >> n2;
	
	cout << "Enter the sign of the operation to perform : "
	cin >> n;
	
	switch(n){
		case '+':
			Add(n1 ,n2);
			break;
		case '-':
			Sub(n1 ,n2);
			break;
		case '*':
			Multi(n1 ,n2);
			break;
		default : 
		cout << "Entered Sign must be + , - , * only!!!!" << endl;
	}

}
