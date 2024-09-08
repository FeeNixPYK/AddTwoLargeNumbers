#include <iostream>
#include <cstdlib>
using namespace std;


void addzero(string &a,int b){
    for (int i=0; i < b; i++) a ='0'+a;
}

int main() {
    //ask user to enter two numbers and store as strings.
    string num1, num2, result;
    int length1, length2, lengthDiff, resultLength;
    int carry =0;
    cout << "Enter two numbers to add: " ;
    cin >> num1 >> num2;

    //get the length of two strings and put zeros in shorter string to prepare for addition
    length1 = num1.length();
    length2 = num2.length();
    lengthDiff = abs(length1-length2);
    resultLength = (length1-1);

    //made two strings equal
    if(length1 < length2) {
        addzero(num1,lengthDiff);
        resultLength = (length2-1);
    } else if(length2<length1) {
        addzero(num2,lengthDiff);
    }

    //add the two strings
    for (int i = resultLength; i>=0; i--){
        int sum = (num1[i]-'0')+(num2[i]-'0')+carry;
        carry=sum/10;
        result += (sum%10)+'0';
    }
    return 0;
}
