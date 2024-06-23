#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>

using namespace std ;


    int main(int argc, const char* argv[]) {


        int i ;
        for ( i = 1; i < argc; i++) {
          string s(argv[i]);
            if (s.rfind("--input=", 0) == 0) {
                string _u = s.substr(string("--input=").length());
                cout <<_u<<endl;
                ifstream f( _u.c_str() );
                
                if (f.good()) cout << "File exists" << endl;
                else cout << "File not found" << endl;
            } else {
                cout << "Unknown: " << s << endl;
            }
        }
        return 0;
    }