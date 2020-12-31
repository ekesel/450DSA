//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
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

      int c0=0,c1=0,c2=0,i;
      for(int i=0;i<n;i++)
      {
      	if(arr[i]==0)
      	    c0++;
      	else if(arr[i]==1)
		    c1++;
			else
			c2++;   
	  }
	  while (c0 > 0) { 
        arr[i++] = 0; 
        c0--; 
    } 
  
    // Then all the 1s 
    while (c1 > 0) { 
        arr[i++] = 1; 
        c1--; 
    } 
  
    // Finally all the 2s 
    while (c2 > 0) { 
        arr[i++] = 2; 
        c2--; 
    } 
      for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
      
}
