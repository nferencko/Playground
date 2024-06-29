

#include<iostream>

using namespace std;

void reverse (int &num1 , int &num2);

int main(){
    
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "You entered " << num1 << " and " << num2 << endl;

    reverse(num1,num2);
    cout << "Numbers reverse " << num1 << " and " << num2;

    
    
    return EXIT_SUCCESS;
}

void reverse (int &num1 , int &num2){

    int originalNum1 = num1;
    num1 = num2;
    num2 = originalNum1;

    
}