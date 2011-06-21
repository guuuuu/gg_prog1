#include <iostream>
using namespace std;

int main(){

	int a, b;
	cin >> a >> b;
	int c;
	for(int i=1; i<=b; i++){
		c = a*i; //product
		//print out the result
		cout << a << " * " << i << " = " << c << endl;
	}

}
