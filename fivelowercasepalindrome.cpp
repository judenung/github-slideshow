// CS125 Principle of Programming 
// WEEk: 7
// Program: fivelowercasepalindrome.cpp
// Section: 3
// Name: Juden Ung
// ID: 20020135
#include <iostream> 
#include <string>
#include <cctype>
using namespace std;

    int main(){
    //prompt user to enter a stringa 
    cout << "Enter a string in five smaller case letters: ";
    string str;
    cin >> str;
    int i,j;
    bool palindrome = true;
    if( str.length() == 5 && islower(str[0]) && islower(str[1]) && islower(str[2]) && islower(str[3]) && islower(str[4]) ){
        for ( i=0, j=str.length()-1; i<str.length()/2; i++,j--){
            if (str[i] != str[j]){
            palindrome = false;
            break;
        }
    }
    if (palindrome) {
        cout << str << " is a palindrome" << endl;
    } else {
        cout << str << " is not a palindrome" << endl;
    }
    }else {
        cout << "Sorry wrong input. You didn't enter five lower case letters" << endl;
    }
    return 0;}