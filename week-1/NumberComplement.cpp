class Solution {
public:
    int findComplement(int num) {
     int p=1;
        while(p<num){
            p=2*p+1;
            
        }
        return p^num;
        
    }
};
