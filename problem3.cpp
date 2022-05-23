/* Problem description:

   The prime factors of 13195 are 5, 7, 13 and 29.

   What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>
#include <cmath>

using namespace std;

long int findMaxFactor(long int n) {
    long int maxFactor = 1;
    long int i = 2;
    while(n > 1) {
        while (n % i == 0) {
            n = n/i;
        }
        maxFactor = i;
        i++;
    }
    return maxFactor;
}

int main() {
    cout << findMaxFactor(600851475143);
    return 0;
}