#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Book {
    private:
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
      virtual string getSummary(){
        string summary =  "The book " + title + " is written by " +  author + " explains " + subtitle + ". The books is published by "+ publisher + " priced RS " + to_string(price);
        return summary;
      }


      friend string getPublication(Book b1);

};

string getPublication(Book book){
  //accessing private members from the friend function
  cout << book.title << " is published by Yajana " <<endl;
};

int main(){
  Book b1("OOPS", "OOPS using C++", "Yajana", 250);
  getPublication(b1);
}