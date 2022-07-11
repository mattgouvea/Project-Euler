#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(int n) {
    string s = to_string(n);
    for(int i = 0, j = s.size()-1; i <= s.size()/2; ++i, --j) {
        if(s[i] != s[j]) {
            return false;
        }
    }
    return true;
}

int main() {
    int max = 0;
    for(int i = 999; i >= 1; --i) {
        for(int j = 999; j >= 1; --j) {
            if(is_palindrome(i*j) && i*j > max) {
                max = i*j;
            }
        }
    }
    printf("%d", max);
}