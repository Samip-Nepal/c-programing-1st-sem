//wap to find the largest from the array using the fun
#include <iostream>
#include <cmath>
int largest(int a[10],int);
int main()
{
	int a[10],n,i,m;
	cout<<"enter the number of elements in array";
	cin<<n;


	cout<<"enter the elements :"<<endl;
	
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}

	m=max(a,n);
	cout<<"maximum number is:"<<m<<endl;
return 0;
}
max(int x[10],int k)
{
	int t,i;
	t=x[0];
	for(i=1;i<k;i++)
        {
		if(x[i]>t)
			t=x[i];
	}
	return(t);
}
