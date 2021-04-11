#include <iostream>

using namespace std;

class Book {
    public:
        double pages;
        double price;
        string title;
        string author;  
        string publisher; 

    public:
      Book(string name, string writer, int amount){
        title = name;
        author = writer;
        price = amount;
      }


    public:    
      string getSummary(){
        string summary =  "The book " + title + " is written by " +  author + ". The books is published by "+ publisher + " priced RS " + to_string(price);
        return summary;
      }

    
};

int main(){
  Book b1("Signals and System", "Shiv", 250);
  Book *ptr;
  ptr = &b1; 
  // Now try to access a member using member access operator
  cout << "Book summary: " << ptr->getSummary();
}