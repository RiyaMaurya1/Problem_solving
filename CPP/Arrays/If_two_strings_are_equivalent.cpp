class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
       int n1 = word1.size();
       int n2 = word2.size();
       string string1 = "";
       string string2 = "";
       for(int i = 0; i<n1 ; i++){
           string1 = string1 + word1[i];
       } 
        for(int i = 0; i<n2 ; i++){
           string2 = string2 + word2[i];
       } 
        cout << string1 << " " << string2 << endl;
       if( string1 == string2){
           return true;
       }
        return false;
       
    }
};
