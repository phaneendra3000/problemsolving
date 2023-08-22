#include <bits/stdc++.h>
using namespace std;

int main() {
// 	int t;cin>>t;while(t--)
	{
    int l,b;
    cin>>l>>b;
    int n ;
    cin>>n;
    long long int sum = 0;
    for(int i = 0;i<n;i++)
    {
        int L,B;
        cin>>L>>B;
        sum = sum + max((L/l)*(B/b),(L/b)*(B/l));
    }
    cout<<sum<<endl;
	}
	return 0;
}
