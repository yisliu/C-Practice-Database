#include <iostream>
#include <string>
#include <list>
#include <iterator>
using namespace std;

//To-do:
//1. there is bug
//hint: define database

//Step 0:
//Make a struct so that you could put all of the input in
//one place, instead of multiple variables.
//first name, last, email, age, and phone number
//define list

struct Database{
  string fName, lName;
  string email;
  int age, pNum;
};

int main() {
  list<Database> list1;
  int run = 3;
  Database base;
  for (int i = 0; i<run; i++){
    //step 1, input, and ouput, as well as a for loop so
    //that you could take inputs multiple times, and also 
    //make a object which is used in a structure and save
    //it in the list.
    cout<<"Please enter your first name, last, email, age, and phone number:\n";    cin>>base.fName>>base.lName>>base.email>>base.age>>base.pNum;
    //cout<<base.fName<<" "<<base.lName<<" "<<base.email<<" "<<base.age<<" "<<base.pNum<<"\n";
    list1.push_back(base);
    cout << "\033[2J\033[0;0H";
  }
  for (Database i:list1){
    cout<<"~~~\n";
    cout<<"First Name: "<<i.fName<<"\n"<<"Last Name: "<<i.lName<<"\n"<<"Email: "<<i.email<<"\n"<<"Age: "<<i.age<<"\n"<<"Num: "<<i.pNum<<"\n";
  }
  //step 3, print all of the input out
  //jack sue jacksue@email.com 999 29321
  //tony sue jacksue@email.com 999 29321
  //mary sue jacksue@email.com 999 29321
}