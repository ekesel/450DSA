//Find the "Kth"  max element of an array 
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>arr;
	int n,a;
	cout<<"No. of elements in array"<<"\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr.push_back(a);
	}

      std::sort(arr.begin(),arr.end(),greater<int>());
      int k;
      cout<<"Enter Kth Element \n";
      cin>>k;
      cout<<"Kth Maximum Element is"<<"\n"<<arr[k-1];
 
}
