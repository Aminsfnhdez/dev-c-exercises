//max comun divisor (mcd)
#include<iostream>
using namespace std;

// 12|2    24|2
// 6|2     12|2
// 3|3	   6|2      MCD=12
// 1	   3|3
//         1
int o=0;
int mcd(int n1, int n2){

if(n1==0) return n2;
    else mcd(n2%n1,n1);

}

main(){
	int N1, N2;
	cout<<"MAXIMO COMUN DIVISOR DE 2 NUMEROS 2.0"<<endl<<endl;
	cout<<"Numero 1: "; cin>>N1;
	cout<<"Numero 2: "; cin>>N2;
	
	cout<<"EL MCD de "<<N1<<" y "<<N2<<" es: "<<mcd(N1, N2)<<endl;
	
}
