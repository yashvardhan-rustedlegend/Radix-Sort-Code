#include<iostream>
#include<math.h>
using namespace std;

	void radixsort(int a[],int n,int l)
	{
		int k,z,temp;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				k=a[i]/pow(10,l);
				z=a[j]/pow(10,l);
			
				if(k%10>z%10)
				{
					temp=a[j];
					a[j]=a[i];
					a[i]=temp;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
int main()
{
	int a[]={170,45,75,90,802,24,2,66};
	int n=sizeof(a)/sizeof(a[0]);
	int l=0;
	for(int i=0;i<n;i++)
	{
		radixsort(a,n,l);
		l++;
	}
}
