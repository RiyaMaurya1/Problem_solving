vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    int n = strs.size();
    vector<string> og;
    map<string, vector<string>> mp;
    vector<vector<string>> ans;

    for (int i = 0; i < n; i++)
    {
        og.push_back(strs[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sort(strs[i].begin(), strs[i].end());
    }
    for (int i = 0; i < n; i++)
    {
        mp[strs[i]].push_back(og[i]);
    }
    for (auto x : mp)
    {
        ans.push_back(x.second);
    }
    return ans;
}
