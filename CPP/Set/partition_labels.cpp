class Solution
{
public:
    vector<int> partitionLabels(string s)
    {
        int n = s.size();
        map<int, pair<int, int>> mp;
        set<char> se;
        vector<int> ans;
        int length = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            mp[s[i]].first = i;
        }

        for (int j = 0; j < n; j++)
        {
            mp[s[j]].second = j;
        }

        for (auto x : mp)
        {
            se.insert(x.first);
        }
        for (int i = 0; i < n; i++)
        {
            length += 1;
            int count = 0;
            for (auto x : se)
            {
                if ((i >= mp[x].first && i >= mp[x].second) || (i < mp[x].first && i < mp[x].second))
                {
                    count += 1;
                }
            }
            if (count == se.size())
            {
                ans.push_back(length);
                length = 0;
            }
        }

        return ans;

        // we are using first occurence and second occurence of an element to find where is partition happening. The current index is going to be on either side of each unique character's first and last occurence.
        // index will never fall in between the first and last occurence of an elemenet.
    }
};
