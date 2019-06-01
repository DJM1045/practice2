///*请编写一个函数，将两个数字相加。不得使用 + 或其他算数运算符。
//给定两个int A和B。请返回A＋B的值*/
//class UnusualAdd {
//public:
//	int addAB(int A, int B) {
//		// write code here
//		int M, N;
//		while (B != 0)
//		{
//			M = (A ^ B);
//			N = (A & B) << 1;
//			A = M;
//			B = N;
//		}
//		return A;
//	}
//};