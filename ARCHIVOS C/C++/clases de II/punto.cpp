#include<iostream>
using namespace std;

main()
{
	
	int n[2][2]={{1,2},{3,4}};
	int *puntero=&n[0][0];//segun aqui apunta al '2' y no al uno
//	for(int i=0;i<2;i++)
//	{
//		cout<<endl;
//		for(int j=0;j<2;j++)
//		{
//		cin>>n[i][j];
//		}
//	}
	cout<<*puntero<<endl;
	
	for(int i=4;i>=1;i--)
	{
//		cout<<endl;
//		for(int j=0;j<2;j++)
//		{
		if(i>=2)
		{
			cout<<*puntero+(4-i)<<"\t";
		}
		if(i<2)
		{
			
			cout<<*puntero+(4-i)<<"\t";
		}
//		}
	}
	
	
	
}

