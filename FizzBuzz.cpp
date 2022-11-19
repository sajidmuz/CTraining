#include <iostream>
#include <cassert>
#include <string>
using namespace std;

string fizzBuzz(int num) {

    
    if ((num % 3 == 0) && (num % 5 != 0)) {
        return "fizz";
    } else if ((num % 5 == 0) && (num % 3 != 0)) {
        return "buzz";
    } else if (num % 15 == 0) {
        return "fizzBuzz";
    } else {
        return to_string(num);
    }
}

void testFizzBuzz() {
    assert(fizzBuzz(3) == "fizz");
    assert(fizzBuzz(5) == "buzz");
    assert(fizzBuzz(15) == "fizzBuzz");
    assert(fizzBuzz(4) == "4");
    assert(fizzBuzz(1) == "1");
}

int main() {
    testFizzBuzz();
}
