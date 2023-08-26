#include <bits/stdc++.h> 
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    int n = arr.size();
    vector<int> ans;
    unordered_map<int,int> a;
    for(int i = 0;i<k;i++)
    {
        a[arr[i]]++;
    }
    ans.push_back(a.size());
    int i =0;
    int j = k-1;
    while(j<n && i <n-k+1)
    {
        a[arr[i]]--;
        if(a[arr[i]]==0)
        {
            a.erase(arr[i]);
        }
        i++;
        j++;
        a[arr[j]]++;
        if (j < n) {
          ans.push_back(a.size());
        }
    }
	return ans;
}
