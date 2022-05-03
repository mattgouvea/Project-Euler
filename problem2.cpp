/* Problem description:
   
   Each new term in the Fibonacci sequence is generated by adding the previous two terms. 
   By starting with 1 and 2, the first 10 terms will be:

   1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

   By considering the terms in the Fibonacci sequence whose values do not exceed four million,
   find the sum of the even-valued terms.
*/

#include <iostream>
#include <map>

using namespace std;

int fib(int n, map<int, int> &memo) {
    if (memo.count(n) != 0) {
        return memo[n];
    }
    else if (n == 1 || n == 2) {
        return 1;
    }
    else {
        memo[n] = fib(n-1, memo) + fib(n-2, memo);
    }
    return memo[n];
}

int main() {
    map<int, int> memo = {};
    int i = 1;
    int result = 0;
    while (fib(i, memo) <= 4000000){
        result += (fib(i, memo) % 2) == 0 ? fib(i, memo) : 0;
        i++;
    }
    printf("%d\n", result);
    return 0;
}