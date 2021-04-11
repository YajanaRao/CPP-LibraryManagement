#include <iostream>
#include <cstring>
#include <string>

/* Suppose, the same function is defined in both the derived class and the based class. Now if we call this function using the object of the derived class, the function of the derived class is executed.

This is known as function overriding in C++. The function in derived class overrides the function in base class.
*/

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
      string getSummary(){
        string summary =  "The book " + title + " is written by " +  author + " explains " + subtitle + ". The books is published by "+ publisher + " priced RS " + to_string(price);
        return summary;
      }


      double getNumberOfPages(){   
          return pages;
      }

};

class Poem: public Book {

  using Book::Book;
  public:
    string getSummary(){
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
    string getSummary(){
        string summary =  "The book " + title + " is the for class " +  to_string(standard);
        return summary;
      }
};

