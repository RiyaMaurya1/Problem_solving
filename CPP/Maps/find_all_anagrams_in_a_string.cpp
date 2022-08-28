vector<int> findAnagrams(string s, string p)
{
    int ns = s.size();
    int np = p.size();
    sort(p.begin(), p.end());
    vector<int> v;
    for (int i = 0; i <= (ns - np); i++)
    {
        string temp = "";
        for (int j = i; j < i + np; j++)
        {
            temp = temp + s[j];
        }
        sort(temp.begin(), temp.end());
        if (temp == p)
        {
            v.push_back(i);
        }
    }
    return v;
}

   // np = 1.5 x 10^4 and ns = 3 x 10^4
  // total time complexity = 2.25 x 10^8
