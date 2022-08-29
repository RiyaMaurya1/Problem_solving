class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int rows = accounts.size();
        int columns = accounts[0].size();
        int sum = 0, answer = 0 ;
        for (int i = 0 ; i < rows ; i++){
            sum = 0 ;
            for (int j = 0 ; j < columns ; j++){
                sum = sum + accounts[i][j];
                }
            if (sum > answer){
                answer = sum;
            }
        }
        return answer;
        
    }
};
