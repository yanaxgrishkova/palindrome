#include "stack.hpp"

void push() 
{
	stack<int> s1;
	for (int i = 0; i < 10; i++) 
	{ 
		s1.push(i); 
	}
		
	cout << "RESULT\t";
	for (size_t j = 0; j < s1.count(); j++) 
	{ 
		cout << s1[j] << " "; 
	}
	cout << endl << endl;
}

int main() 
{
	push();
}