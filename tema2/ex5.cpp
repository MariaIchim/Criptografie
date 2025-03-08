#include <iostream>
using namespace std;


long long FunctiaIndicatoareEuler(long long n)
{
	long long m = n;
	long long nr = 1;
	long long p = 2;
	while (n != 1)
	{
		if (n % p == 0)
		{
			nr *= (p - 1);
			m /= p;
		}

		while (n % p == 0)
		{
			n /= p;
		}

		p++;
	}
	return m * nr;
}


int main()
{
	cout << FunctiaIndicatoareEuler(123456789) << endl;
}