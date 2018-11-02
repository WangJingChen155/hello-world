#include<iostream>
#include<algorithm>
void main()
{
	using namespace std;
	int N = 6;
	int max1 = 0;

	while (N>0)
	{
		int t = 0;
		if ((N & 1) == 1)
		{
			
			N >>= 1;

			while ((N & 1) == 0 && N != 0)
			{
				if (t == 0)
					t++;
				t++;
				N >>= 1;
			}
			if ((N & 1) == 1)
				t++;
			max1 = max(t, max1);
		}
		else if ((N & 1) == 0)
		{
			N >>= 1;
		}

	}
	cout << max1;
	system("pause");
}