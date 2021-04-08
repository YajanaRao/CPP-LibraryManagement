// Program to illustrate the working of
// public and private in C++ Class

#include <iostream>
using namespace std;

class Book {

   private:
    string name;
    double pages;

   public:

    // function to initialize private variables
    void getData(string title, double no) {
        name = title;
        pages = no;
    }

    string getSummary() {
        return "The book named " + name +  " has " + to_string(pages);
    }

  
};

int main() {

    // create object of Room class
    Book book1;

    // pass the values of private variables as arguments
    book1.getData("5 Am Club" ,  192);

    cout << "Summary of book =  " << book1.getSummary() << endl;
    
    return 0;
}