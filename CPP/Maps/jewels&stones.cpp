class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        int jewel_len = jewels.size();
        int stone_len = stones.size();
        int sum = 0;
        map<char, int> jewel_map, stone_map;

        for (int j = 0; j < jewel_len; j++)
        {
            jewel_map[jewels[j]]++;
        }
        for (int i = 0; i < stone_len; i++)
        {
            stone_map[stones[i]]++;
        }

        //  cout << "jewel_map elements" << endl;
        // for (auto x : jewel_map){
        //     cout << x.first<< "  " << x.second<<endl;
        // }

        // cout << "stone_map elements" << endl;
        for (auto y : stone_map)
        {
            if (jewel_map[y.first] > 0)
            {
                sum = sum + y.second;
            }
        }

        return sum;
    }
};
