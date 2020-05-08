class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count_jewels=0;
        map<char,int>m;
        for(char i : J){m[i]=0; }
        for(char i : S){
            if(m.count(i))
                  count_jewels++;
        }
        return count_jewels;
        
    }
   
};
