class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        vector<int>a;
        for(int i = 1;i<=26;i++)
        {
            a.push_back(i);
        }
        for(int i = 0;i<chars.size();i++)
        {
           int b =  chars[i] - 'a' ;
           a[b]  = vals[i]; 
        }
        vector<int>ans;
        for(int i = 0;i<s.size();i++)
        {
            int b = s[i] - 'a';
            ans.push_back(a[b]);
        }
        int sum = 0;
        int maxs = INT_MIN;
        for(int i = 0;i<s.size();i++)
        {
            sum = sum + ans[i];
            maxs = max(sum,maxs);
            if(sum<0)
            {
                sum = 0;
            }
        }
        if(maxs<0)
        {
            return 0;
        }
        return maxs;
    }
};
