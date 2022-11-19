#include <cassert>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string rev(string str) {
    string word;
    string revStr;
    stringstream line(str);
    int flag = 0;
    
    while (line >> word) {
        if(flag)
            revStr.insert(0, " "); 
        revStr.insert(0, word);
        flag++;
    }
    return revStr;
}

int main() {
    assert(rev("java is easy") == "easy is java");
}