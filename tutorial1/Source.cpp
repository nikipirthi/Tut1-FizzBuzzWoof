#include <iostream>
using namespace std;
int main()
{
	int i;
	for (i = 1; i <= 20; i++)
	{
		
		if (i % 3 == 0 && i % 5 == 0)
			cout << "fizz buzz" << endl;
		
		else if (i % 3 == 0)
			cout << "fizz" << endl;
		else if (i % 5 == 0)
			cout << "buzz" << endl;
		
		else
			cout << i << endl;
	}
}