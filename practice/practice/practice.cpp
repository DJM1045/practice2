//查找组成一个偶数最接近的两个素数
#include<iostream>
using namespace std;
bool isnotPri(int n)
{
	int a = 0;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			a++;
	}
	if (a == 0)
		return false;
	else
		return true;
}
int main()
{
	int num;
	while (cin >> num)
	{
		int Lmid = (num) / 2;
		int Rmid = num - Lmid;
		while (isnotPri(Lmid) || isnotPri(Rmid))
		{
			Lmid--;
			Rmid++;
		}
		cout << Lmid << endl;
		cout << Rmid << endl;
	}
	return 0;
}