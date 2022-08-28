class Solution
{
public:
    static bool cmp(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
        // if cmp returns false swapping happens and if cmp is true their position is intact. we assume that index of a < index of b, before any checks are performed in cmp function.
    }
    // cmp is comparator function

    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        vector<int> freq;
        int n = nums.size();
        vector<pair<int, int>> v;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[nums[i]] += 1;
        }

        for (auto x : mp)
        {
            v.push_back({x.first, x.second});
        }
        sort(v.begin(), v.end(), cmp);

        for (int i = 0; i < k; i++)
        {
            freq.push_back(v[i].first);
        }
        return freq;
    }
};
