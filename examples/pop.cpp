#include "stack.hpp"

void pop() 
{
	stack<double> s1;

	for(int i = 0; i < 10; i++) 
	{ 
		s1.push(double(i)); 
	}
		
	cout << "RESULT\t";

	for(int j = 0; j < 5; j++) 
	{ 
		cout << s1.pop() << " "; 
	}

	cout << endl << endl;
}

int main() 
{
	pop();
	return 0;
}