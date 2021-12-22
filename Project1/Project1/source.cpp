#include <iostream>

using namespace std;

int main()
{
	int height = 0;
	int length = 0;
	float extent = 0.0f;

	cin >> height;
	cin >> length;
	
	extent = height * length / 2;


	cout << "Height =" << height << endl;
	cout << "Length =" << length << endl;
	cout << "Extent =" << extent << endl;


	return 0;

}