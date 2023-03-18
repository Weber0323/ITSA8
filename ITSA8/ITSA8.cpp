#include <iostream>  
 
using namespace std;

int main() {
    int n, i;
    while (cin >> n)
    {


        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                break;
            }
        }
        if (i == n) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
}