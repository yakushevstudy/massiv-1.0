#include<iostream>
#define N 5
using namespace std;

int main()
{
	int mini, t, i, n, min = 1000000;
	int a[N];
	for (i = 0; i < N; i++)
	{
		cout << "Enter a[" << i << "]";
		cin >> a[i];
		if (a[i] < min)
		{
			min = a[i];
			mini = 1;
		}

	}
	t = a[0];
	a[0] = a[mini];
	a[mini] = t;
	cout << min << endl;
	for (i = 0; i < N; i++)
	{
		cout << "a[" << i << "]=" << a[i] << endl;
	}
	return 0;

}