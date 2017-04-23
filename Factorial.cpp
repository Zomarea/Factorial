#include<iostream>
using namespace std;

float factorial(float x) {
      return(x == 1) ? x : x * factorial(x-1);
}

int main(){
	float n;
	cout << "Work out the factorial of..." << endl;
	cin >> n;
	cout << "The factorial of " << n << " is " << factorial(n);;
}

