#include <iostream>
using namespace std;

int pattern (int n)
{
	for(int i=1; i<=n; ++i)
	{
		for(int j=1; j<=n; ++j)
		{
			if(i==j || (i+j==n+1) || (i+j==n-1) || (i+j==(n-1)*2))
			{
			
			if(j%2==0)
			{
				cout<<"0 ";
			}
			else
			{
					cout<<"1 ";
			}
			}
			else
			{
				cout<<"0 ";
			}
		}
		cout<<endl;
	}
}

int main()
{
	int n;
	cin>>n;
	pattern(n);
	return 0;
}

