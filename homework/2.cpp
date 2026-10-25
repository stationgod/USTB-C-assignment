#include<iostream>
using namespace std;
int main(){
    int m;
    int count=0;
    cin >> m;
    for (int i=1; i <= m; i++){
        for (int j = 0; j <= m; j++){
            for (int n = 0; n <= m; n++){
                if ( n != j && j != i && n != i && n % 2 == 0){
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}