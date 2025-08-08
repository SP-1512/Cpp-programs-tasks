#include <bits/stdc++.h>
using namespace std;


class Student{
public:
string rollnum;
string name;
Student(string rollnum,string name){
    this->rollnum = rollnum;
    this->name = name;
}

void display(){
    cout << "Name : " << name << endl;
    cout << "Roll Number : " << rollnum << endl;;
}
};

int main() {
	Student s1("24B11AI348","Sriram");
	Student s2("24B11CS159","Devasish");
	s1.display();
	s2.display();

}

