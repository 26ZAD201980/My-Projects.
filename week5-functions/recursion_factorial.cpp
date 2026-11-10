#include<iostream>
using namespace std;
int factorialRecursive(int n){
    if(n<=1){
        return 1;
    }
    return n*factorialRecursive(n-1);
}
int factorialTail(int n,int accumulator=1){
if(n<=1){
    return accumulator;
}
return factorialTail(n-1,n*accumulator);
}
int main() {
    int num;
    // Ask the user for a number
cout << "Enter a number to calculate factorial: ";
cin >> num;

// Validate input
if (num < 0) {
cout << "Factorial is not defined for negative numbers." << endl;
return 1;
}

// Calculate using simple recursion
cout << "\nUsing simple recursion:" << endl;
cout << " " << num << "! = " << factorialRecursive(num) << endl;

// Calculate using tail recursion
cout << "\nUsing tail recursion:" << endl;
cout << " " << num << "! = " << factorialTail(num) << endl;

// Comparison
cout << "\n--- Comparison ---" << endl;
cout << "Simple recursion: Clear, matches mathematical definition." << endl;
cout << "Tail recursion: More efficient for large n (compiler optimization)." << endl;



return 0;
}