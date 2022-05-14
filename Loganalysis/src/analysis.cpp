#include <iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;


	// repeated doubling
	int ndays =0;
	for(int nrabbits = 1; nrabbits <= n; nrabbits *= 2)
		++ndays;
	cout << ndays << endl;

	// repeated halving
	ndays = 0;
	for(int ncovid=n; ncovid >= 1; ncovid /= 2)
		++ndays;
	cout << ndays <<"\n";

	// spread measure
	int total = 0;
	ndays = 0;
	for(int ncovid = 1; ncovid <= n ; ncovid *= 2)
	{
		total += ncovid;
		++ndays;
	}
	cout<<ndays;


	return 0;
}
