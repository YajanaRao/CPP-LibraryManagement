#include <iostream>
using namespace std;

struct Book 
{
    char title[50];
    int pages;
    float price;
};

int main()
{
    Book p1;
    
    cout << "Enter Full title: ";
    cin.get(p1.title, 50);
    cout << "Enter pages: ";
    cin >> p1.pages;
    cout << "Enter price: ";
    cin >> p1.price;

    cout << "\nDisplaying Information." << endl;
    cout << "title: " << p1.title << endl;
    cout <<"pages: " << p1.pages << endl;
    cout << "price: " << p1.price;

    return 0;
}