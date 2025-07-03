#include <iostream>
using namespace std;

int main() {
    int A, B, temp;
    cout << "Enter Value Of A: ";
    cin >> A;
    cout << "Enter Value Of B: ";
    cin >> B;
    temp = A;
    A = B;
    B = temp;
    cout << "After swap, A = " << A << ", B = " << B << endl;
    return 0;
}
