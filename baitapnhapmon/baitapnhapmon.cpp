// baitapnhapmon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;


void nhapmang(int*& b, int& n)
{
	cin >> n;
	b = new int[n];
	for (int i = 0; i < n; i++)
		cin >> b[i];
}
void xuatmang(int* b, int n)
{
	for (int i = 0; i < n; i++)
		cout << b[i] << " ";
	cout << endl;
}
void noichuoi(int* s1, int n, int* s2, int m, int*& s, int& nc)
{
	nc = m + n;
	s = new int[nc];
	int x1 = s1[0];
	int x2 = s2[0];
	int ia = 0; int ib = 0; int ic = 0;
	while ((ia < n) && (ib < m))
	{
		if (x1 < x2)
		{
			s[ic] = x1;
			ia++;
			ic++;
			x1 = s1[ia];
		}
		else
		{
			s[ic] = x2;
			ib++;
			ic++;
			x2 = s2[ib];
		}

	}
	if (ia < n)
		while (ia < n)
		{
			s[ic] = s1[ia];
			ic++;
			ia++;
		}
	if (ib < m)
		while (ib < m)
		{
			s[ic] = s2[ib];
			ib++;
			ic++;

		}
}
int main()
{
	int* s1, n, * s2, m, * s, nc;
	nhapmang(s1, n);
	nhapmang(s2, m);
	noichuoi(s1, n, s2, m, s, nc);
	xuatmang(s, nc);
	return 0;
}

