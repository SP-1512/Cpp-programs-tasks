#include <bits/stdc++.h>
using namespace std;


class Rectangle{
public:
float length,breadth;
Rectangle(float length,float breadth){
    this->length = length;
    this->breadth = breadth;
}

void display(){
    cout << "Area of the Rectangle : " << length*breadth << endl;
    cout << "Perimeter of the Rectangle : " << 2*(length+breadth) << endl;
}
};

int main(){
	float length, breadth;
	cout << "Enter the length and breadth of the  rectangle : "<< endl;
	cin >> length >> breadth;
	Rectangle r1(length, breadth);
	r1.display();
	
}
