#include<iostream>

using namespace std;

//Virtual destructors

class Book {
	public:
		Book(){
			cout<<"Book called"<<endl;
		}
		virtual ~Book() {
			cout<<"Book deleted"<<endl;
		}
};

class Poem : public Book {
	public:
		Poem() {
			cout<<"Poem called"<<endl;
			
		}
		
		~Poem(){
			cout<<"Poem deleted"<<endl;
		}
};

int main ()
{
	Poem *a= new Poem();
	//first constructor of Parent goes into stack, followed by Child class. And when memeory is deallocated in LIFO fashion
	// first child class object is destructed, followed by the parent class
	cout<<"\n"<<endl;
	cout<<"Deleting from Stack"<<endl;
	cout<<"\n";
	Book *p = a ;//creating a pointer of type Book which refers to pointer of type Poem class
	delete(p); // will automatically delete derived class
	return 0;
}