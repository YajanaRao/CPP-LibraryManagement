/*
function is a function that is expanded in line when it is called. When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call.
*/
#include <iostream>
using namespace std;
inline int cube(int s)
{
	return s*s*s;
}
int main()
{
	cout << "The cube of 3 is: " << cube(3) << "\n";
	return 0;
} //Output: The cube of 3 is: 27

