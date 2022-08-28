class Solution
{
public:
    void f(vector<char> &s, int left, int right)
    {

        if (left >= right)
        {
            return;
        }

        swap(s[left], s[right]);

        f(s, left + 1, right - 1);
    }

    void reverseString(vector<char> &s)
    {
        f(s, 0, s.size() - 1);
    }
};
