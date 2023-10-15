#include "phonebook.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

phonebook::phonebook(){
  head=nullptr;
}

phonebook::~phonebook(){
  cout<<"destroying list"<<endl;
  while(head != NULL){
    //cout<< "removing entry" << head ->firstname <<endl;
    cout<< "removing entry" << head ->lastname<<endl;
    //cout<< "removing thephonenumber"<< head -> phonenumber<<endl;
    //remove(head->firstname);
    remove(head->lastname);
    //remove(head->phonenumber);
  }
  
}


void phonebook:: push_front(string fname,string lname,int phonenum){
  entry *insert = new entry;
  insert -> firstname = fname;
  insert -> lastname  = lname;
  insert -> phonenumber = phonenum;
  insert -> next = head;
  head = insert;
}


void phonebook:: push_back(string fname, string lname, int phonenum){
  entry *newguy = new entry;
  newguy -> next =NULL;
  newguy -> firstname =fname;
  newguy -> lastname =lname;
  newguy -> phonenumber = phonenum;

  //case1:: list is empty
  if (head==NULL){
    head=newguy;
  }
  //case2: list is not empty
  else{
    entry *tail=head;
  
  //get to the endl
  while (tail -> next != NULL){
    tail =tail -> next;
  }
  tail->next = newguy;
  }
}
void phonebook::print(){
  entry *printguy;
  cout<<"head-->";

  printguy = head;

  while (printguy != NULL){
    cout<<printguy -> firstname <<"-->";
    cout<<printguy -> lastname <<"-->";
    cout<<printguy -> phonenumber <<"-->";
   
    printguy = printguy -> next;
}
  cout<<"NULL"<<endl;
}

 void phonebook:: remove(string lname){
  entry *temp, *eraser;

  //case1:empty list
  if (head ==NULL){
    return;
      }
  else if (head -> lastname == lname){
    eraser=head;
    head=head->next;
    delete eraser;
  }
  //case3:destroy
  else{
    temp=head;
    while (temp->next != NULL && temp->next->lastname != lname){
      temp= temp->next;   
     }
    //no value
    if(temp ->next==NULL)
      return;

    eraser =temp->next;

    temp->next=eraser->next;
    delete eraser;
   }  
}
