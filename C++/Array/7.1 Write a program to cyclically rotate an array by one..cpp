#include <bits/stdc++.h>
using namespace std;
int main() {
    
        int n;
        cin>>n;
       vector<int>arr;
       int a;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            arr.push_back(a);
        }
        int temp=arr[n-1];
        for(int i=n-1;i>=0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
       

}
