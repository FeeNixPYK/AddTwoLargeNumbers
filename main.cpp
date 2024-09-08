#include <iostream>
using namespace std;

void addzero(string &a,int b){
    for (i=0; i < b; i++) a ='0'+a;
}

int main() {
    //ask user to enter two numbers and store as strings.
    string num1, num2, result;
    cout << "Enter two numbers to add: " ;
    cin >> num1 >> num2;

    //get the length of two strings and set up to use in a for loop.
    int length1 = (num1.length()-1);
    int length2 = (num2.length()-1);





    return 0;
}
