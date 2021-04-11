#include <iostream>  
using namespace std;  
int main( ) {  
    string s1 = "Hello";    
    char ch[] = { 'C', '+', '+'};    
    string s2 = string(ch);  
    char name[] = { 'Y', 'A', 'J', 'A', 'N', 'A' };
    string nameString = string(name);  
    cout << s1 << endl;    
    cout << "s2: " << s2 << endl;  
    cout << "Name: " << nameString << endl;  
}  
