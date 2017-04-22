#include<iostream>
using namespace std;

int factorial(int x) {
  if(x == 1) return x;
  else
  return x * factorial(x - 1);
}

int main(){
	int n;
	int r;
	cout << "Work out the factorial of..." << endl;
	cin >> n;
	r = factorial(n);
	cout << "The factorial of " << n << " is " << r;
}

