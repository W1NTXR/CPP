#include<iostream>
using namespace std;

bool vowcheck (char a) {
    if (a == 'A' || a == 'E' || a == 'I' ||a == 'O' || a == 'U' || a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
        return true ;
    }

    return false ;
}

int main () {
    int t ;
    cin >> t ;
    while (t != 0)
    {
        int n, op = 0 ;
        cin >> n ;
        char s[n] , k[n] ;
        for(int i = 0 ; i <= n ; i ++) {
            cin >> s[i] ;
            if (s[i] == '?') {
                s[i] = 'u' ;
            }
            cout << s[i] ;
        }

        cout << endl ;

        for(int i = 0 ; i <= n ; i ++) {
            cin >> k[i] ;
            if(k[i] == '?') {
                k[i] = 'u';
            }

            if (s[i] != k[i]) {
                if (vowcheck(s[i]) && k[i] != s[i]) {
                    if (vowcheck(k[i])) {
                        op += 2 ;
                    }

                    else {
                        op ++ ;
                    }
                }

                else {
                    if (s[i] != k[i]) {
                    if(vowcheck(k[i])) {
                        op ++ ;
                    }

                    else {
                        op += 2 ;
                    }
                    }
                }
                cout << op << "     " << vowcheck(s[i]) << "    " << vowcheck(k[i]) << endl ;

                
            }

            cout << k[i] ;
            
        }

       // cout << op << endl ;
        
        t --;
    }
    
}