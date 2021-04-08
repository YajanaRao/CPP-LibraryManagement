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
      ~Book(){
        cout << "Book summary : " << getSummary() << endl;
      }

    public:    
      virtual string getSummary(){
        string summary =  "The book " + title + " is written by " +  author + " explains " + subtitle + ". The books is published by "+ publisher + " priced RS " + to_string(price);
        return summary;
      }


      virtual double getNumberOfPages(){   
          return pages;
      }

};

class Poem: public Book {

  using Book::Book;
  public:
    string getSummary() override {
        string summary =  "The book " + title + " is the collection of poems written by " +  author + ". The books is published by "+ publisher + " priced RS " + to_string(price);
        return summary;
      }
};

class TextBook: public Book {
  public:
  int standard;

  public: 
    TextBook(string name, string writer, int standard):Book(name, "", writer, 0){
        title = name;
        author = writer;
        standard = standard;
    }
  
  public:
    string getSummary() override {
        string summary =  "The book " + title + " is the for class " +  to_string(standard);
        return summary;
      }
};
