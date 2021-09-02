//Find the "Kth"  min element of an array 
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

      std::sort(arr.begin(),arr.end());
      int k;
      cout<<"Enter Kth Element \n";
      cin>>k;
      cout<<"Kth minimum Element is"<<"\n"<<arr[k-1];
 
}
