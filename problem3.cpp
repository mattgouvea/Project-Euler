/* Problem description:

   The prime factors of 13195 are 5, 7, 13 and 29.

   What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    for (int i = 3; i<ceil(sqrt(n)); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

long int findMaxFactor(long int n) {
    long int maxFactor = 0;
    if (n % 2 == 0) {
        maxFactor = 2;
    }
    for(long int i = 3; i<ceil(sqrt(n)); i += 2) {
        if(n % i == 0 && isPrime(i)) {
            maxFactor = i;
        }
    }
    return maxFactor;
}

int main() {
    cout << findMaxFactor(600851475143);
    return 0;
}