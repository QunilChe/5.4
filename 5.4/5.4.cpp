// Лабораторна робота No 5.4
#include <iostream>
#include <cmath>
using namespace std;
double S0(const int N)
{
	double s = 0;
	for (int i = N; i <= N; i++)
		s += (cos(i)+sin(i))/(1+(cos(i)*sin(i)));
	return s;
}
double S1(int N, const int i)
{
	N = 20;
	if (i > N)
		return 0;
	else
		return (cos(i) + sin(i)) / (1 + (cos(i) * sin(i))) + S1( N, i + 1);
}
double S2(const int N, const int i)
{
	if (i < N)
		return 0;
	else
		return (cos(i) + sin(i)) / (1 + (cos(i) * sin(i))) + S2(N, i - 1);
}
double S3(const int N, const int i, double t)
{
	t = t + (cos(i) + sin(i)) / (1 + (cos(i) * sin(i)));
	if (i >= N)
		return t;
	else
		return S3(N, i + 1, t);
}
double S4(const int N, const int i, double t)
{
	t = t + (cos(i) + sin(i)) / (1 + (cos(i) * sin(i)));
	if (i <= N)
		return t;
	else
		return S4( N, i - 1, t);
}
int main()
{
	int N;
	N = 20;
	cout << "(iter) S0 = " << S0(N) << endl;
	cout << "(rec up ++) S1 = " << S1( 0, N ) << endl;
	cout << "(rec up --) S2 = " << S2( N, N) << endl;
	cout << "(rec down ++) S3 = " << S3(  0, N, 0) << endl;
	cout << "(rec down --) S4 = " << S4( N, N, 0) << endl;
	return 0;
}