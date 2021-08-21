#include <iostream>

using namespace std;

bool isDigit(char);
int main()
{
	char num;
	cout << "Enter a Character ";
	cin >> num;
	isDigit(num);


	return 0;
}
bool isDigit(char num)
{


	bool x;
	if (num == '0' || num == '1' || num == '2' || num == '3' || num == '4' || num == '5' || num == '6' || num == '7' || num == '8' || num == '9')

	{
		cout << "It is a digit ";
		x = true;
	}
	else
	{
		cout << "It is not  a digit ";
		x = false;

	}
	cout << " " << x;

	return x;
}

 