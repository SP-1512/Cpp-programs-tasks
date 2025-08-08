#include <bits/stdc++.h>
using namespace std;

class Employee{
	public:
		int emp_id;
		string emp_name;
		string dept;
		static int emp_count;

Employee(){
	emp_count++;
}

Employee(int emp_id,string emp_name,string dept){
		this->emp_id = emp_id;
		this->emp_name = emp_name;
		this->dept = dept;
		emp_count++;
	}
	
static void display(){
	cout << emp_count << endl;
}

};
int Employee::emp_count = 0;

int main(){
    int emp_id;
    string name,dept;
	Employee e1(emp_id,name,dept);
	Employee e2;
	Employee::display();
}
