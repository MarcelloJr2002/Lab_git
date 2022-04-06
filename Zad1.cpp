#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;
int silnia(int x)
{
	if (x == 0 || x == 1)return 1;
	int s = 1;
	for (int i = 2; i <= x; i++)
	{
		s *= i;
	}
	return s;
}
int main()
{
	cout << "Hello World!" << endl;
	int n;
	cin >> n;
	while (1)
	{
		cin >> n;
		if (n < 0)
		{
			cout << "NIEPOPRAWNE DANE! WARTOSC POWINNA BYC WIEKSZA LUB ROWNA 0" << endl;
			cout << "WCZYTAJ WARTOSC PONOWNIE" << endl;
			cin >> n;
		}
		if (n >= 0)break;
	}
	cout << "Silnia z " << n << " wynosi: " << silnia(n) << endl;

}
