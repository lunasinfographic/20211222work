#include <iostream>

using namespace std;

int main()
{


	int height = 0;
	int base = 0;

	float Area = 0.0f;

	cin >> height;
	cin >> base;

	Area = static_cast<float>(height) * static_cast<float>(base) / 2.0f;

	cout << Area << endl;

	return 0;

}

