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
      string getSummary(){
        string summary =  "The book " + title + " is written by " +  author + " explains " + subtitle + ". The books is published by "+ publisher + " priced RS " + to_string(price);
        return summary;
      }


      double getNumberOfPages(){   
          return pages;
      }

};
