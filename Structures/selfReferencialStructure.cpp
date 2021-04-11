#include <iostream>
#include <string>

using namespace std;

struct Bus {
  int distance;
  string from;
  string to;
  Bus *next;
  Bus *previous;
};

int main(){
  Bus sagar_to_sirsi;
  Bus sirsi_to_hubli;
  sagar_to_sirsi.from = "Sagar";
  sagar_to_sirsi.to = "Sirsi";
  sagar_to_sirsi.next = &sirsi_to_hubli;
  sirsi_to_hubli.previous = &sagar_to_sirsi;
  sirsi_to_hubli.to = "Hubli";
  sirsi_to_hubli.from = "Sirsi";

  cout << sagar_to_sirsi.next->to << endl;
  cout << sirsi_to_hubli.previous->from << endl;
}