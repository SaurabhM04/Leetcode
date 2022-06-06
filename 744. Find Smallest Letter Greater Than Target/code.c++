class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int n = letters.size();
        vector<char> v;
        if (target >= letters[n - 1])
            return letters[0];
        for (int i = 0; i < n; i++)
        {

            if (letters[i] > target)
            {
                v.push_back(letters[i]);
                break;
            }
        }
        return v[0];

        // binary search
        //  if (letters.back() <= target)
        //  return letters.front();
        //  int low = 0, high = letters.size() - 1;
        //  while (low < high) {
        //      auto mid = (low + high) / 2;
        //      if (target < letters[mid])
        //        high = mid;
        //      else
        //        low = mid + 1;
        //  }
        //  return letters[low];
    }
};