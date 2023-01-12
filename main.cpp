
#include <bits/stdc++.h> // While4
using namespace std;
int main() {
	srand((int)time(0));
	int N = rand() % 1000 + 1;
	//N = 81;
	cout << "N = " << N << endl;
	
	double K = N * 1.0;
	while(K >= 3)
		K /= 3;
		
	cout << "Power of 3: ";
	cout << ((K == 1) ? "true" : "false");
	cout << endl;
	return 0;
}
