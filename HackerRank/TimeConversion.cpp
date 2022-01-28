#include<iostream>
#include<string>
using namespace std;

void convertedTime(string s) {
    if(s.find("PM") == -1) {
        //return s.erase(8,2) ;
        return ;
    }
    string t;
    int k = stoi(s.substr(0,2));
    cout << k << endl ;
    if(k == 12) {
        t = "00" ;
    }
    else {
        t = to_string(k+12) ;
    }
    s.erase(0,2) ;
    t.append(s) ;

    //return t.erase(8,2);
}

int main () {
    string s ;
    getline(cin , s) ;
     convertedTime(s) ;
}