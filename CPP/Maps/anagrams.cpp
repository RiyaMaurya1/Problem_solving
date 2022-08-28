int main()
{
    string str1 = "", str2 = "";
    cin >> str1 >> str2;
    int n1 = str1.size();
    int n2 = str2.size();
    map<char, int> mp1, mp2;
    int sum = 0;

    if (n1 != n2)
    {
        cout << "Not anagrams" << endl;
    }
    else
    {
        for (int i = 0; i < n1; i++)
        {
            mp1[str1[i]] += 1;
        }
        for (int i = 0; i < n2; i++)
        {
            mp2[str2[i]] += 1;
        }
        for (auto x : mp2)
        {
            if (x.second == mp1[x.first])
            {
                sum = sum + 1;
            }
        }
        if (sum == mp1.size())
        {
            cout << "anagram";
        }
        else
        {
            cout << "Not anagrams";
        }
    }

    return 0;
}
