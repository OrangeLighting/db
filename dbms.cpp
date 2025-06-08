#include <iostream>
#include <iomanip>
#include "DBMS.hpp"
#include <ctype.h>

// DATE CLASS 

// constructor 
Date::Date()



// Student Class 

// set function of class Student 
void Student::setName(string name){
    this->name = name;                          // to set student name 
}

void Student::setFather_name(string father_name){
    this->father_name = father_name;            // to set father name  
}

void Student::setAddress(string address){
    this->address = address;
}

void Student::setGender(string gender){
    this->gender = gender;
}

void Student::set_Tel(string Tel){
    this->Tel = Tel;                        // to set contact number of student 
}

// get function of class Student 
string Student::getName(){
    return name;                                // to get student name
}

string Student::getFather_name(){
    return father_name;                        // to get Father name
}

string Student::getAddress(){ 
    return address;                           // to get address
}

string Student::getGender(){
    return gender;                            // to get gender 
}

string Student::get_Tel(){
    return Tel;                               // to get contact number
}

// Friend Function
ostream& operator <<(ostream& cout, Student A){
    cout << "Student Name                 " << A.name << endl;
    cout << "Student Father name          " << A.father_name << endl;
    cout << "Gender                       " << A.gender << endl;
    cout << "Student Permenent Address    " << A.address << endl;
    cout << "Contact Number               " << A.Tel <<endl ;
    return cout;
}
istream& operator >>(istream& cin, Student& A){
    cout << "Please enter student name" << endl;
    getline(cin, A.name);
    cout << "Please enter student father name" << endl;
    getline(cin, A.father_name);
    cout << "Please enter student address " <<endl;
    getline(cin, A.address);
    cout <<"Please enter student gender " << endl;
    getline(cin,A.gender);
    cout << "Please enter student contact number " << endl;
    getline(cin, A.Tel);
    return cin;
}

// i am very bad at git i still need to learn it hahahahahaha   