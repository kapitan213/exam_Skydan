#include <iostream>
using namespace std;


double EnterCash();
double ChangeCoin(double cash);

int main()
{
	double cash = EnterCash();
	int arr[4] = { 0 };

	cash = ChangeCoin(cash);
	Recurs(cash, arr);
	Show(arr);

	system("pause");
	return 0;
}

double EnterCash()
{
	double cash;
	double num;
	while (true)
	{
		cout << "Enter cash: ";
		cin >> cash;

		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
		}

		num = cash * 100;
		num -= int(num);
		if (0 < cash && num == 0)
			break;
	}
	return cash;
}

double ChangeCoin(double cash)
{
	return cash * 100;
}






