#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Point
{
	
public:
	int y;
	Point(int x) : y(x) {}
};

int main()
{
	vector<Point> obj1 { 1,2,3,4,5 };
	
	for (auto i : obj1)
	{
		cout << "Vector: " <<  i.y << endl;
	}


	list<Point> obj2 {1,2,3,4,5};

	for (const auto& point : obj2) 
	{
		cout << "List: " << point.y << endl;
	}
}

