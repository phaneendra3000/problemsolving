#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
    
	while(t--)
	{
        int ri ;
        int cj ;
        int h ;
        cin>>ri>>cj>>h;
        
        vector<vector<int>>ans(ri);
        vector<pair<int,int>>pi;
        for(int i = 0;i<ri;i++)
        {
            for(int j = 0;j<cj;j++)
            {
                int a;
                cin>>a;
                ans[i].push_back(a);
            }
        }
        for(int i = 0;i<ri;i++)
        {
            sort(ans[i].begin(),ans[i].end());
        }
        for(int i = 0;i<ri;i++)
        {
        int sum=0;
        int pen = 0;
        int count =0;
            for(int j = 0;j<cj;j++)
            {
                if(sum + ans[i][j]<=h && j ==cj-1)
                {
                    sum = sum + ans[i][j];
                pen = pen + sum;
                count++;
                pi.push_back({count,pen});

                }
               else if(sum + ans[i][j] <= h)
            {
                sum = sum + ans[i][j];
                pen = pen + sum;
                count++;

            }else 
            {   
                pi.push_back({count,pen});
                break;
            }
            }
        }
        int rc = pi[0].first;
        int rp = pi[0].second;
        int answer = 1;
        for(int i = 1;i<ri;i++)
        {
            if(pi[i].first> rc)
            {
                answer++;
            }else if(pi[i].first == rc && pi[i].second<rp)
            {
                answer++;
            }
        }
	   cout<<answer<<endl;
	}
    
	return 0;
}
