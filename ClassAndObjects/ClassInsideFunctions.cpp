#include<iostream>

using namespace std;

//Implementation of Local classes-Classes defined inside a function

//function prototyping-forward declaration
void getClass();

int main(){
	getClass();
	return 0;
	
}


void getClass() {
	class Book {
		public:
			string title;
			int price;
			void getdetails() {
				
				cout<<"Title: "<< title <<endl<<"Price is :"<< price <<endl;
			}
	};
	
	//Class object and the members of class can only be used inside the function as it has a local block scope
	Book p;
	p.title="Designing Destiny";
	p.price=20;
	p.getdetails();
	
}
