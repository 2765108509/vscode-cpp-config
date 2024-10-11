#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

class Solution
{
public:
  int thirdMax(vector<int> &nums)
  {
    set<int, greater<int>> s;
    for (auto num : nums)
    {
      s.insert(num);
    }

    if (s.size() < 3)
      return *s.begin();
    else
      return *(++ ++s.begin());
  }
};

int main()
{
  cout << 1 << endl;
  getchar();
  return 0;
}
