#include<iostream>
using namespace std;
int main(){
    char op;
    double num1, num2;
    cout<<"SIMPLE CALCULATOR"<<endl << "~~~~~~~~~~~~~~~~~~ \n";
    
   cin >> num1;
   cin >> op;
   cin >> num2;
   switch (op){
    case '+':
        cout << "=" << (num1+num2);
        break;
         case '-':
        cout << "=" << (num1-num2);
        break;
         case '*':
        cout << "=" << (num1*num2);
        break;
         case '/':
         if(num2!=0.0)
        cout << "=" << (num1/num2);
        else
        cout << "=" << "Divided by Zero situation";
        break;
    default:
    cout << op << "is an invalid operator";
        break;
    }
    return 0;
}