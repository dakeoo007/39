//#include<iostream>
//#include<stdlib.h>
//#include<time.h>
//
//using namespace std;
//int main()
//{
//	int a[7] = { 0 };
//	srand(time(0));
//	for (int i = 1; i <= 10000; ++i)
//		a[i + rand() % 6]++;
//	for (int i = 1; i <= 6; ++i)
//		cout << i << ":" << a[i] << endl;
//
//	return 0;
//}

#include<iostream>

using namespace std;
double dis(double, double, double, double);
int main()
{
	double(d);
	double x1 = 0, x2 = 4, y1 = 0, y2 = 3;
	d = dis(x1, x2, y1, y2);
	cout << d << endl;
	return 0;
}
double dis(double x1, double x2, double y1, double y2)
{
	double d = sqrt((y1 - y2)*(y1 - y2) + (x1 - x2)*(x1 - x2));
	return d;
}