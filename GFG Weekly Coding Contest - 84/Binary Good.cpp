//User function Template for C++

class Solution
{
    public:
    int solve(string str, int n)
    {
        vector<int> counts;
        
        int  count = 0;
        for(int i=0; i<n; i++){
            if(str[i] == '0' && count >0){
                counts.push_back(count);
                count = 0;
            }
            else if(str[i] == '1'){
                count++;
            }
        }
        if(str[n-1] == '1') counts.push_back(count) ;
        
        sort(counts.begin(), counts.end());
        
        if(counts.size() == 0) return 0;
        
        int ans = 0  , mid = counts[counts.size()/2];
        
        for(int i=0; i<counts.size(); i++){
            ans += abs(mid - counts[i]);
        }
        
        
        
        return ans;
    }
};
