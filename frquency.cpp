#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here.
    int f[6]={1,2,4,4,3,4};
    map<int,int>m;
    vector<int>s;
    int a=6;
    int k=floor(a/3);
    int hash [12]={0};
    for(int i=0;i<a;i++)
    {
        hash[f[i]]++;
    }
    for(int i=0;i<a;i++)
    {
    	if(hash[f[i]]!=-1)
    	{
		
    	cout<<hash[f[i]];
    	hash[f[i]]=-1;
    }
	}

}
