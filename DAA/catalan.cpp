#include <iostream>
using namespace std;
int catalanN(int n);

int catalanN( int n)
{
	int catalan[n + 1];
	catalan[0] = catalan[1] = 1;
	for (int i = 2; i <= n; i++) {
		catalan[i] = 0;
		for (int j = 0; j < i; j++){
            catalan[i] += catalan[j] * catalan[i - j - 1];
        }
			
	}
    return catalan[n];
}

int main()
{
    int n;
    cin>>n;
	for (int i = 0; i < n+1; i++)
		cout << catalanN(i) << " ";
	return 0;
}
