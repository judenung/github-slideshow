// CS125 Principle of Programming 
// WEEk: 7
// Program: ssn.cpp
// Section: 3
// Name: Juden Ung
// ID: 20020135
#include <iostream> 
#include <string>

using namespace std;
int main(){
    string ssn;
    cout << "Enter social secuirty number";
    cin >> ssn;
    bool isValid = true;
    if (ssn.length() != 11){
        isValid = false;}
    if (ssn[3] != '-' || ssn [6] != '-'){
        isValid = false;}
    for (int i = 0; i < ssn.length(); i++){
    if (int(ssn[i]) - int(48) > 9)
      isValid = false;}
    if (isValid){
    cout << ssn << "is valid social security number.";}
    else {
    cout << ssn << "is not a valid social security number.";}
return 0;
    
}