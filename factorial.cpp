Objective
Today, we are learning about an algorithmic concept called recursion. Check out the Tutorial tab for learning materials and an instructional video.

Recursive Method for Calculating Factorial
Function Description
Complete the factorial function in the editor below. Be sure to use recursion.

factorial has the following paramter:

int n: an integer
Returns

int: the factorial of 
Note: If you fail to use recursion or fail to name your recursive function factorial or Factorial, you will get a score of .

Input Format

A single integer,  (the argument to pass to factorial).

Constraints

Your submission must contain a recursive function named factorial.
Sample Input

3
Sample Output

6
code/------------------------------------------------------------------
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){ // base case
        return 1;
    }
        int prefact = factorial(n-1);    //recursive case
        return n*prefact;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    cout<<factorial(n)<<endl; 
    return 0;
}
