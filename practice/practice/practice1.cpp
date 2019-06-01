///*请编写一个函数（允许增加子函数），计算n x m的棋盘格子（n为横向的格子数，m为竖向的格子数）沿着各自边缘线从左上角走到右下角，总共有多少种走法，要
//求不能走回头路，即：只能往右和往下走，不能往左和往上走。*/
//
//#include<iostream>
//using namespace std;
//int func(int A, int B)
//{
//	if (A == 0 || B == 0)
//		return 1;
//	return func(A, B - 1) + func(A - 1, B);
//}
//int main()
//{
//	int A, B;
//	while (cin >> A >> B)
//		cout << func(A, B) << endl;
//	return 0;
//}