// CS125 Principle of Programming 
// WEEk: 7
// Program: Three_cities_in_alphabetical_order.cpp
// Section: 3
// Name: Juden Ung
// ID: 20020135
#include <iostream> 
#include <string>
using namespace std;
int main(){
string city1, city2, city3;
//ENter Name for city1
cout << "Enter the first city: ";
getline(cin,city1);
//ENter Name for city2
cout << "Enter the second city: ";
getline(cin,city2);
//Enter Name for city3
cout << "Enter the third city: ";
getline(cin,city3);
cout << " The city in alphabetical order are: ";
if (city1 < city2 && city2 < city3 && city1 < city3)
{
    cout << city1 << " " << city2 << " " << city3 << endl;}
else if (city1 < city2 && city2 > city3 && city1 < city3){
    cout << city1 << " " << city3 << " " << city2 << endl;
}else if (city1 > city2 && city1 < city3 && city2 < city3){
    cout << city2 << " " << city1 << " " << city3 << endl;}
else if (city1 > city2 && city1 > city3 && city3 > city2 ){
    cout << city2 << " " << city3 << " " << city1 << endl;}
else if (city1 < city2 && city1 > city3 && city2 > city3){
        cout << city3 << " " << city1 << " " << city2 << endl;
}else 
    {
    cout << city3 << " " << city2 << " " << city1 << endl;
        
}return 0;

}