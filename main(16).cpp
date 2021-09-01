#include <iostream>
#include <cmath>

using namespace std;

int k;
double pi;

int main() 
{
	cout << "how many iterations? " << endl;
	cin >> k;
	
	pi = 0;
	
	for (int i = 0; i < k; i++)
	{
		pi += pow(-1,i) * (4.0 / (2.0 * i + 1));
	}
	
	cout << "with " << k << " iterations, the value of pi is: " << pi << endl;
	
  return 0;
}

//the more iterations, the more accurate the result of pi