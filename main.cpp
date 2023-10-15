#include "phonebook.h"
 #include <iostream>
 #include  <string>
 #include <fstream>
 #include <iomanip>
using namespace std;

int main() {
  
  phonebook phonebook;
  string fname,lname;
    int phonenum;
  cin>>fname>>lname>>phonenum;
  //int phonenumber;
 //cin>>phonenumber;
  cout<<"testingpushfront"<<endl;
  phonebook.push_front(fname,lname,phonenum);
  phonebook.print();
  cout<<"testinpushback"<<endl;
    phonebook.push_back(fname, lname, phonenum);
  phonebook.print();
  return 0;
}
