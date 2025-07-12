
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    int min_num, max_num;
    
    cout << "Enter three numbers: ";
    cin >> a >> b >> c >> d >> e;
  
    if (a <= b && a <= c) {
        min_num = a;
    } else if (b <= a && b <= d) {
        min_num = b;
    } else if (c <= d && c <= e) {
        min_num = c;
    }
    
    else {
        min_num = e;
    }

    if (a >= b && a >= e) {
        max_num = a;
    } else if (b >= a && b >= e) {
        max_num = b;
    } else {
        max_num = e;
    }
    
    cout << "Minimum number is: " << min_num << endl;
    cout << "Maximum number is: " << max_num << endl;
    
    return 0;
}
