class Solution
{
public:
    int uniqueMorseRepresentations(vector<string> &words)
    {
        string morse[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

        char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        set<string> res;
        map<char, string> mp;
        for (int i = 0; i < 26; i++)
        {
            mp[alpha[i]] = morse[i];
        }
        for (int i = 0; i < (int)words.size(); i++)
        {
            string sum = "";
            for (int j = 0; j < (int)words[i].size(); j++)
            {
                sum = sum + mp[words[i][j]];
            }
            res.insert(sum);
        }
      return res.size();
    }     
};
