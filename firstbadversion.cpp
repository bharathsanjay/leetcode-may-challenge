class Solution {
public:
    
    int firstBadVersion(int n) {
        long long int value;
         if(n==1)
              return 1;
         else
         {
          long long int l=0,r=n;
         
             while(l<=r)
           {
                int mid= (l+r)/2;
                if(!isBadVersion(mid))
            {
                if(isBadVersion(mid+1))
                { value= mid+1;
                   break;
                 
                }
                else
                {   
                    l=mid;
                 }
                
            }
            if(isBadVersion(mid))
            {
                if(!isBadVersion(mid-1))
                { value= mid;
                  break;
                 
                }
                else 
                {
                    r=mid;
                }
            }
            
            
        }
             return value;
    }
             
    }
    
};