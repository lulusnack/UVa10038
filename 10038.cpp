#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int input = 0;
	while (cin >> input)
	{
		bool j = true;
		int buffer = 0;
		vector<int> data;
		vector<int> number;
		for (int i = 0; i < input; i++)
		{
			cin >> buffer;
			data.push_back(buffer);
		}

		for (int i = 0; i < input - 1; i++)
		{
			number.push_back(abs(data[i] - data[i + 1]));
		}

		sort(number.begin(), number.end());
		for (int i = 0; i < number.size(); i++)
		{
			if (number[i] != i + 1)
			{
				j = false;
				cout << "Not jolly" << endl;
				break;
			}
		}
		if (j)
		{
			cout << "Jolly" << endl;
		}
	}
	return 0;
}
