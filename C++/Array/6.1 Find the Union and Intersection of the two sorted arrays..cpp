#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>n;
        cin>>m;
        vector<int>arr;
        vector<int>brr;
        unordered_set<int>s;
        int a,b;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            arr.push_back(a);
        }
        for(int j=0;j<m;j++)
        {
            cin>>b;
            brr.push_back(b);
        }
        for(int i=0;i<n;i++)
        {
            
           s.insert(arr[i]); 
        }
        for(int j=0;j<m;j++)
        {
           s.insert(brr[j]); 
        }
        cout<<s.size();
        cout<<"\n";
    }
}
