#include<iostream>
using namespace std;
int test, n, res, A[20][20];
int X[8] = { -2,-2,-1,-1,1,1,2,2 };
int Y[8] = { -1,1,-2,2,-2,2,-1,1 };
void slove(int r, int c)
{
	for (int i = 0; i < 8; i++)
	{
		int u = r + X[i];
		int v = c + Y[i];
		if (u >= 0 && u < n && v >= 0 && v < n && A[u][v] == 1)
		{
			res++;
			A[u][v] = 0;
		}
	}
}
int main()
{
	//freopen("input.txt", "r", stdin);
	cin >> test;
	for (int tc = 1; tc <= test; tc++)
	{
		cin >> n >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> A[i][j];
			}
		}
		res = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (A[i][j] == 2)
				{
					slove(i, j);
				}
			}
		}
		cout << "#" << tc << " " << res << endl;
	}
	return 0;
}