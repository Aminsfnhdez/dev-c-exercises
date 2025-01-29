#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){
	int n,r=1;
	cout<<"ingrese un numero :"<<endl;
	cin>>n;
		
	for(int i=1;i<=n;i++){
		r = r*i;
	}
	cout<<"el factorial de "<<n<<" es igual a "<<r<<endl;
}
