#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Book {
    public:
        double pages;
        double price;
        string title;
        string subtitle;
        string author;  
        string publisher; 

    public:
      Book(string name, string caption, string writer, int amount){
        title = name;
        subtitle = caption;
        author = writer;
        price = amount;
      }


    public:    
      string getSummary(){
        string summary =  "The book " + title + " is written by " +  author + " explains " + subtitle + ". The books is published by "+ publisher + " priced RS " + to_string(price);
        return summary;
      }
};

float getTotal(Book b1, Book b2){
  return b1.price + b2.price;
}

int main(){
  Book b1("OOPS using C++", "OOPS using C++", "Yajana", 150);
  Book b2("OOPS using JS", "OOPS using JavaScript", "Yajana", 250);
  cout << "Total Price of books is : " << getTotal(b1, b2) << endl;
}