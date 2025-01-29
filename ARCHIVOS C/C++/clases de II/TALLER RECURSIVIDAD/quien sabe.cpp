#include <iostream>
using namespace std;

void seleccion( int[], int, int, int );

int main(){
	int arreglo[] = { 97,3,100,1 };
	int men = arreglo[ 0 ];
	int temp;
	
	seleccion( arreglo, 0 ,temp , men );
	
	for( int i = 0; i <= 3; i++ ){
		cout << arreglo[ i ] << endl;
	}
	
	return 0;
}

void seleccion( int arreglo[], int i, int temp, int men ){
	if( i <= 3 ){
	   for( int j = i ; j <= 3; j++ ){
	   	men = arreglo[ i ];
	   	
			if( men > arreglo[ j ] ){
	   		men = arreglo[ j ];
	   		temp = j;
	   		arreglo[ temp ] = arreglo[ i ];
		      arreglo[ i ] = men;
			}
		}
	   seleccion( arreglo, i + 1, temp, men );
	}	
}


