#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    char operation;

    cout << "enter your first number here" << endl;
    cin >> num1;
    cout << "enter your operation" << endl;
    cin >> operation;
    cout << "enter your second number here" << endl;
    cin >> num2;

    int result;
    if(operation = '+'){
        num1+num2;
    }else if(operation='-'){num1-num2;}
    else if(operation='*'){num1*num2;}
    else if(operation='/'){num1/num2;}
    else if(operation='^'){num1^num2;}else{cout <<"invalid operation is being trying to be conduct" ;}

    cout <<result;


    return 0;
}
