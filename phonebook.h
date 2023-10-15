#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

struct entry{
  entry *next;
  std::string firstname;
  std::string lastname;
  int phonenumber;
};
class phonebook{  
public:

  phonebook();

  ~phonebook();

void push_front(std::string fname, std::string lname, int phonenum);

  void push_back(std::string fname, std::string lname, int phonenum);

  void read_from_file(std::string filename);

  void write_to_file(std::string filename);

  void insert_sorted(std::string fname, std::string lname, int phonenum); 

  
  void lookup(std::string lname);

  void reverse_lookup(int phonenum);

  void print();

  void remove(std::string lname);

private:
  entry *head;
};
#endif //PHONEBOOK_H
