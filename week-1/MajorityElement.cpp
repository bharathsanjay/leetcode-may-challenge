class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj;
        unordered_map<int,int>m;
        for(int i :  nums)
            m[i]++;
        for(auto i : m ){
            if(i.second>((nums.size())/2))
            {  maj=i.first;
               break;
        }
        }
        return maj;
    }
};
