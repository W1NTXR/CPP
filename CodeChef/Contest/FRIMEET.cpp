    #include <iostream>
    using namespace std;

    int main() {
        int t ;
        cin >> t ;
        while(t != 0) {
            
            int x , y ;
            cin >> x >> y ;
            
            if (y > x) {
                cout << "NO" << endl ;
            }
            
            else {
                while (x != y) {
                    x ++ ;
                    y += 2 ;
                }
                
                if (x == y) {
                    cout << "YES" << endl ;
                }
            }
            
            t -- ;
        }
        return 0;
    }
