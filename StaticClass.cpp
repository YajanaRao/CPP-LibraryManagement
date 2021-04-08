//static variable and static member methods
#include<iostream>


using namespace std;

class Book {
	public:
	    static int pages;//cannot be defined inside a class
	    int price=0;
	//constructor
	Book() {
		pages++;
		price++;
		cout<<"Number of static Books"<<" "<<pages<<endl;
		
	}
	
	//destructor
	~Book()
	{
		cout<<endl;
		cout<<"There are now "<<pages<<" Books reamining"<<endl;
		pages--;
	}
	
	static void totalBook() {
		cout<<"There are "<<pages<< " "<< "people"<<endl;
//		cout<<"There are "<<price<< " "<< "people"<<endl;-Produces Error as static member function can only access, static class variable
		
	}
	

};
//static variable needs to be defined outside a class defination

int Book :: pages=0;


int main () {
	//only 1 copy of static variable created and shared amongst all the objects.
	Book b1;
	Book b2;
	Book b3;
	Book b4;
	//4 objects- the constructor is called 4 times and pages(static variable) becomes 4
	
	Book :: totalBook(); 
	//can access static variables and methods without using an object of class.
	cout<< Book :: pages; 
	
	
return 0;	
}