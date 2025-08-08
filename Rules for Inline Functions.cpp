#include<bits/stdc++.h>

using namespace std;

class Calculator {
    public: int n1,
    n2;
    char n;
    Calculator(int n1, int n2, char n) {
        this -> n1 = n1;
        this -> n2 = n2;
        this -> n = n;
        switch (n) {
            case '+':
                Add(n1, n2);
                break;
            case '-':
                Sub(n1, n2);
                break;
            case '*':
                Multi(n1, n2);
                break;
            default:
                cout << "Entered Sign must be + , - , * only!!!!" << endl;
        }
    }


    inline void Add(int x, int y) {
        cout <<"Sum : "<< x + y << endl;
    }
    inline void Sub(int x, int y) {
        cout <<"Difference : "<< x - y << endl;
    }
    inline void Multi(int x, int y) {
        cout <<"Product : "<< x * y << endl;
    }
};

int main() {
    int n1, n2;
    char n;
    cout << "Enter the two numbers : " << endl;
    cin >> n1 >> n2;

    cout << "Enter the sign of the operation to perform : ";
    cin >> n;

    Calculator c1(n1, n2, n);


}
