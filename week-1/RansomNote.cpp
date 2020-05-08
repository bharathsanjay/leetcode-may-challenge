class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       
        
    map<char, int> m;
        for (char x: magazine) {
           m.count(x)?m[x]++:m[x]=1;
        }
        for (char x: ransomNote) {
            if (m.count(x)) {
                m[x] --;
                if (m[x] < 0) {
                    return false;
                }
            } else {
                return false;
            }
        }
        return true;
    }
};
