#include <iostream>

using namespace std;

int main(){  
    double r1, i1, r2, i2, r3 ,i3;
    char op;
    cin >> r1 >> i1 >> op >> r2 >> i2;
    if (op != '+' && op != '-' && op != '*' && op != '/' ){
        cout << "error" << endl;
    }
    else{
        if ( op == '/'){
            if ( r2 == 0 && i2 == 0){
                cout << "Divisor cannot be 0";
            }
            else{
                r3 = (r1*r2 + i1*i2)/(r2 * r2 + i2 * i2);
                i3 = (r2*i1 - r1*i2)/(r2 * r2 + i2 * i2);
                cout << r3 << " + " << i3 << "i" << endl;
            }
        }
        else if( op == '+'){
            r3 = r1 + r2;
            i3 = i1 + i2;
            cout << r3 << " + " << i3 << "i" << endl;
        }
        else if ( op == '-'){
            r3 = r1 - r2;
            i3 = i1 - i2;
            cout << r3 << " + " << i3 << "i" << endl;
        }
        else if ( op == '*'){
            r3 = r1*r2 - i1*i2;
            i3 = r1*i2 + r2*i1;
            cout << r3 << " + " << i3 << "i" << endl;
        }
        

        
    }
    
    return 0;
}
