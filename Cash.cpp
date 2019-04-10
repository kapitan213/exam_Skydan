#include <iostream>
using namespace std;


double EnterCash();
double ChangeCoin(double cash);
void Recurs(double cash, int* pointer);
void Show(int* pointer);
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

void Recurs(double cash, int* pointer)
{
	if (cash >= 25)
	{
		cash -= 25;
		pointer[0]++;
	}
	else  if (cash >= 10)
	{
		cash -= 10;
		pointer[1]++;
	}
	else if (cash >= 5)
	{
		cash -= 5;
		pointer[2]++;
	}
	else if (cash >= 1)
	{
		cash -= 1;
		pointer[3]++;
	}

	if (cash != 0)
		Recurs(cash, pointer);
}

void Show(int * pointer)
{
	cout << "Use coin 25 " << pointer[0] << endl;
	cout << "Use coin 10 " << pointer[1] << endl;
	cout << "Use coin 5  " << pointer[2] << endl;
	cout << "Use coin 1  " << pointer[3] << endl;
}





