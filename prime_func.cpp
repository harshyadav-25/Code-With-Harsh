#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= num; i++) { // Check divisibility up to √num
        if (num % i == 0) return false; // If divisible, it's not prime
    }
    return true; // Prime number
}

// Function to print all prime numbers up to n
void printPrimes(int n) {
    cout << "Prime numbers up to " << n << ": ";
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " "; // Print prime number
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    printPrimes(n); // Call function to print primes
    
    return 0;
}
