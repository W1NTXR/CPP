#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool checkly (int x) {
    if(x > 1700 && x < 1917) {
        if(x%4 == 0) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        if(x % 4==0 && x %100 != 0) {
            return true;
        }
        else if(x%400==0) {
            return true;
        }
        else {
            return false;
        }
    }
}

int daysCalc(int x, bool checkLY) {
    if(x < 8) {
        if(x ==2 && checkLY) {
            return 29;
        }
        if(x==2 && !checkLY) {
            return 28 ;
        }
        if(x % 2 != 0) {
            return 31;
        }
        return 30 ;
    }
    else {
        if(x%2 == 0) {
            return 31 ;
        }
        else {
            return 30 ;
        }
    }
}

vector<int> month;
void monthCalc(int x, int &count,bool checkLY) {
    count ++ ;
    if (x < daysCalc(x,checkLY)) {
        month.push_back(x);
        month.push_back(count);
    }
    else {
        monthCalc(x-daysCalc(count,checkLY), count, checkLY);
    }
}

string dayOfProgrammer(int year) {
    int count = 0;
    if(checkly(year)) {
        monthCalc(366, count, checkly(year));
    }
    else {
        monthCalc(365,count,checkly(year));
    }
    string date ;
    if(month[0] < 10) {
        date[0] = '0' ;
        date.append(to_string(month[0]));
    }
    else {
        date.append(to_string(month[0]));
    }
    date.append(".");
    if(month[1] < 10) {
        date[3] = '0' ;
        date.append(to_string(month[1]));
    }
    else {
        date.append(to_string(month[1]));
    }
    date.append(".");
    date.append(to_string(year));
    return to_string(count);
}

int main () {
    int year ;
    cin >> year ;
    cout << dayOfProgrammer(year) ;

    return 0 ;
}