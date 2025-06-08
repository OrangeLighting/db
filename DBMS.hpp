#include <string>
#include <fstream>

using namespace std;
#ifndef DBMS_H
#define DBMS_H


class Date{
    private :
        int    year;
        string day;
        string month;
    public :
        // CONSTRUCTOR
        Date();                                           // default 
        Date(string month, string Day, int year);         // Constructor with three arguments first month , then day and year
        Date(string day, string month,int year);          // Constructor with three arguments first day, month and year
        Date(int year, string month, string day);         // Constructor with three arguments first year, then month  and day at last
        Date(string month, string day, int year);         // Constructor with three arguments first month in string then day and then year;
        // Date(string,string,int);

        // set function of Date class
        void setYear(string);
        void setDay(string);
        void setMonth(string);

        // get function of Date class
        int     getYear();
        string  getDay();
        string  getMonth(); 
};
class Address
{
    private : 
        int house_no;
        string street_no;
        string city;
        string province;
    public :
        
    // constructor 
    Address();
    Address(string house_no , string street_no , string city, string province);

} 

class Student{

    private :                            
        string name;                      // student name
        string father_name;               // student father name
        Date   birth_date;                // student date of birth
        string rollno;                    // student roll no
        Address address;                   // student address (address is also the class) 
        string gender;                    // Student gender 
        string Tel;                       // student contact number  
    public :
        // constructor
        Student();                  // defualt constructor 

        // MEMEBER FUNCTION 

        // set function 
        void setName(string );
        void setFather_name(string );
        void setAddress(string);
        void setGender(string);
        void set_Tel(string );

        // get function
        string getName();
        string getFather_name();
        string getAddress();
        string getGender();
        string get_Tel();

        // Friend Function 
        friend ostream& operator << (ostream& cout, Student A );
        friend istream& operator >> (istream& cin, Student& B);
        
        // destructor 
        ~Student();
};
#endif