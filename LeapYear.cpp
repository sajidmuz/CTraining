#include <iostream>
#include <cassert>
#include <string>
using namespace std;

bool isLeapYear (int year) {
    return ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
}

void testLeapYear() {
    assert(isLeapYear(2024));
    assert(!isLeapYear(2025));
}

int main(int argc, char* argv[]) {
    testLeapYear();

    if (isLeapYear(atoi(argv[1])))
        cout << argv[1] << " is Leap Year" << endl;
    else
        cout << argv[1] << " is not Leap Year" << endl;;
}