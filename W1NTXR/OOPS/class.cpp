#include<iostream>
using namespace std;

class student {
    string name ;

    public :
    int age ;
    bool gender ;

    student () {                                                            
        cout << "default" << endl ;                                             //default constructor
    } 

    student (string s, int a, int g) {
        name = s ;
        age = a ;                                                               //parameterised constructor
        gender = g ;
        cout << "parameterised constructor" << endl ;
    }

    student (string s, int a, int g) :name{s},age{a},gender{g} {                //better parameterised constructor
        
    }

   student (student &a) {
       name = a.name ;
       age = a.age ;                                                             //Copy Constructor
       gender = a.gender ;
       cout << "copy constructor" << endl ;
   } 

    void setName (string s) {
        name = s ;
    }

    void printInfo () {
        cout << "Name: " << name << endl ;
        cout << "Age: " << age << endl ;
        cout << "Gender: " << gender << endl ;  
    }

    bool operator == (student &a) {
        if (name == a.name && age == a.age && gender == a.gender) {
            return true ;                                                         // operator overloading
        }
        return false ;
    }
};

int main () {
     // student arr[3] ;
    /* for (int i = 0 ; i < 3 ; i ++ ) {
        string s ;
        cin >> s ;
        arr[i].setName(s) ;
        cin >> arr[i].age ;
        cin >> arr[i].gender ;
    }
    */

    /*
    for (int i = 0 ; i < 3 ; i ++ ) {
        arr[i].printInfo () ;
    }
    */

    student a("Xd",21,0) ;                  //calling parameterised constructor

    student b;                              //calling default constructor

    student c = a ;                         //calling custom made copy constructor 

    if (c == a) {
        cout << "Same" << endl ;
    }

    else {
        cout << "Not same" << endl ;
    }
    
    return 0;
}

/* 
    Difference between Shallow Copy and Deep Copy
        Shallow copy is done by default copy constructor
        suppose a class has data members. Data members are pointing at sum dynamically allocated memory
        so in shallow copy it will copy the pointers but won't copy where r they pointing at
*/

/* destructors are used to destroy an object 
    it gets called when the object is destroyed (like the end of program or function)
*/

/*  Operator Overloading
        when u make an operator work in a way that isnt like how it functions normally
        that condition is known as Operator Overloading
*/