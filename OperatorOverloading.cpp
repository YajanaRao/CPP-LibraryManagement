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

    Book operator + (const Book &book) {
        Book collection(this->title + ", " + book.title, this->subtitle + ", "+ book.subtitle, this->author, this->price + book.price);
        return collection;
    }
};

int main() {
  Book book1("ADIYOGI", "THE SOURCE OF YOGA", "Sadguru", 200);
  book1.publisher = "HarperCollins India";

  Book book2("INNER ENGINEERING", "YOGI'S GUIDE TO JOY", "Sadguru", 200);
  book2.publisher = "HarperCollins India";

  Book book3 = book1 + book2;
  cout << "Name of the Collection : " << book3.title << endl;
  cout << "Author of the Collection : " << book3.author << endl;
  cout << "Price of the Collection : " << book3.price << endl;

  
  return 0;
}


