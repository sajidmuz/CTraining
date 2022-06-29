#include<iostream>
using namespace std;

bool isPalindrome(string palindromeCandidate){
    int len = palindromeCandidate.length();
    bool palin = true;

    for(int i=0; i<len; i++){
        if(toupper(palindromeCandidate[i]) != toupper(palindromeCandidate[len-i-1])){
            palin = false;
            break;
        }
    }
    return palin;
}

int main()
{
    string palindromeCandidate;

    cout << "Enter string to check palindrome" << endl;
    cin >> palindromeCandidate;

    cout << isPalindrome(palindromeCandidate) << endl;
    return 0;
}
