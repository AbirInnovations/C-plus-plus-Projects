#include <iostream>

using namespace std;

int main() {

    int x, n, sum = 0;


    cout << "please enter second number";
    cin >> n;

    for(x = 2; x <= n; x++) {


        if((x % 2) == 0) {

            sum = sum+x;

        }
    }

    cout << endl << "Sum of even numbers between" << n << " is : " << sum;

    return 0;
}
