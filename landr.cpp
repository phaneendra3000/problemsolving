#include <bits/stdc++.h>
#include<string> 
using namespace std;
string rightRotate(string str, int d) {
     string a="";
    int n = str.length();
    d=d%n;
    for(int i = n-d; i<n;i++)
    {
        a = a + str[i];
    }
    for(int i = 0;i<=d+1;i++)
    {
        a= a+ str[i];

    }
    return a;
}
int main()
{
    string a = "kmow";
    int d = 5;
    cout<<rightRotate(a,d);
}