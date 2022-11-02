#include <iostream>
using namespace std;
int main()
{
	double max,min,number;
	bool first_try = true;
	cout << "Input as many numbers as you would like, after each entry system will compute the minimum and maximum value. End sequence by typing a character different than a number : ";
	while (cin >> number)
	{
		if (first_try == true)
		{
			max = number;
			min = number;
		}
		if (number > max)
			max = number;
		if (number < min)
			min = number;
		cout << "so far min = " << min << endl;
		cout << "so far max = " << max << endl;
		first_try = false;
	}

}