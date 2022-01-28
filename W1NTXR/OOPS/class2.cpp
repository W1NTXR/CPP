#include<iostream>
using namespace std;

class student {
    string name ;

    public :
    int age ;
    bool gender ;

    student () : student{"None",0,0} {                                              //delegating constructors
                                                                   
    } 

    

    student (string n, int a, bool g) : name{n}, age{a}, gender{g} {                //using initialize list
        printInfo();
    }

    student (string n) : student{n,0,0} {
        
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

    student a ;                  //calling parameterised constructor

    
    return 0;
}

/* CONSTRUCTOR INITIALIZE LIST
    -more efficient
    -initialize list immediately follows the parameter list
    -initializes the data members as soon as they're created
    -order of initialization is the order of declaration of class
*/

/*  DELEGATING CONSTRUCTORS
    -code for constructors is very similar
    -duplicating code can lead to errors
    -c++ allows delegating constructors

    HOW?
        calling constructors themselves in the initialization list
*/