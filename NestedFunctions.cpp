#include<iostream>
using namespace std;

//Nested classes-classes defined inside a class


class Book {
	public:
		 string name;
	
	class Novel {
		public:
			string author;
			string genre;
			string description;
			
			
		
				
	};
	//we need to define object of nested class to access its members inside Parent class
	
	Novel a; //object created
	void getData()
	{
		cout<<"Name: "<<name<<endl<<"Author:"<<a.author<<endl<<"Genre: "<<a.genre<<endl<<"description: "<<a.description<<endl;
	}
	
	
			
};

int main() {
	Book p;
	//creating object of nested clas outiside Parent class throws error
	//Person::Anish an; //need to use scope resolution operator
	p.a.author="Hari Kunj";
	p.a.genre="Dehradun";
	p.a.description="description";
	p.name="Anish";
	p.getData();
	return 0;
	
}