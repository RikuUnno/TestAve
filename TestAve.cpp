#include <iostream>
using namespace std;

int main()
{
	int numberOfPeople;
	double ave;
	double total = 0;

	cout << "何名入力しますか？" << endl;
	cin >> numberOfPeople;

	cout << endl;

	int* p1 = new int[numberOfPeople];

	for (int i = 0; i < numberOfPeople; i++)
	{
		cout << i + 1 << "人目を入力してください。" << flush;
		cin >> p1[i];
		total += p1[i];
	}

	delete[] p1;

	ave = total / numberOfPeople;

	cout << endl;

	cout << "平均点は" << ave << "です。" << endl;
}