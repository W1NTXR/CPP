#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student {
    private:
        int age ;
        int standard ;
        string fname ;
        string lname ;
        
    public:
        int set_age (int x) {
            age = x ;
            return age ;
        }
        int get_age () {
            return age ;
        }
        
        int set_standard (int x) {
            standard = x ;
            return standard ;
        }
        
        int get_standard () {
            return standard ;
        }
        
        string set_first_name (string name) {
            if(name.size() < 50)    
                fname = name ;
            return fname ;
        }
        
        string get_first_name () {
            return fname ;
        }
        
        string set_last_name (string name) {
            if(name.size() < 50)
                lname = name ;
            return lname ;
        }
        
        string get_last_name () {
            return lname ;
        }
        
        string to_string() {
            string s ;
            stringstream st(s) ;
            st << age << ',' << fname << ',' << lname << ',' << standard ;
            
            return st.str() ; 
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}