#include <cassert>
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

string intToHex(int argc , char* num[]) {
    stringstream ss;
    string res;
    for(int i = 1; i < argc; i++) {
        ss << hex << setw(2) << setfill('0') << atoi(num[i]);
        res = ss.str();
    }
    res = "#"+res;
    return res;
}


int main(int argc, char* argv[]) {
    cout <<  intToHex(argc , argv) << endl;
   
}