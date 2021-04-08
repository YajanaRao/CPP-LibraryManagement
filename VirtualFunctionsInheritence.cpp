#include<iostream>
//RUNTIME POLYMORPHISM - Virtual functions are used to achieve runtime polymorphism. It is achieved by function overriding(re-defination)
// of base class method which is re-defined in a derived class.

//Then a pointer of type base class is created which refers to derived class object
//and the base method is called , which actually executes the derived class version
//method.
//Dynamic binding is done i.e during runtime 

using namespace std;

class Book {
	public:
		//does runtime binding of intro() based on the type of object is used to invoke the method
		void virtual intro() {
			cout<<"Hello I am a Book"<<endl;
		}
};

class Novel : public Book {
	public:
		void intro() { //function overridden
			cout<<"This is Novel"<<endl;
		}
};

class Poem : public Book {
	public:
		void intro() {
			cout<<"Hi this is Poem"<<endl;
		}
};


void getIntro(Book &p) {
	p.intro();
}


int main() {
	
	Book *p1,*p2;
	Novel a;
	Poem m;
	p1 = &a;
	p2= &m;
	p2 =  &m;
	
	//runtime polymorphism
	p1->intro();//intro() method of class Anish called
	p2->intro();//intro() method of class Mrinal called 
//	a.intro();
//	getIntro(a);//without virtual base function , it would have printed the base method value
//	getIntro(m);
	
	return 0;
}