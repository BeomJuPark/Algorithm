#include <iostream>
#include <vector>

using namespace std;

vector<int> vec;
int main()
{
	int x,y,w,y;
	cin >> x >> y >> w >> h ;
	vec.push_back(x);
	vec.push_back(y);
	vec.push_back(w-x);
	vec.push_back(h-y);
	
	printf("%d",*min_element(vec.begin(), vec.end());
	return 0;
}

