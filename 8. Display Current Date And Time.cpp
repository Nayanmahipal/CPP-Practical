#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t now = time(0);
    char* date = ctime(&now);
    cout << "Current Date and Time: " << date;
    return 0;
}
