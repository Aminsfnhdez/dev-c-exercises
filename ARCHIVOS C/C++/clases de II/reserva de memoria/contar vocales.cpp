#include<iostream>
#include<string.h>
using namespace std;

main(){
	
	char frase[100];
	int n, vocal=0;
	
	cout<<"ingrese la frase: ";
	cin.getline(frase, 100, '\n');
	
	n=strlen(frase);
	
	for(int i=0;i<n;i++){
		if((frase[i]=='a')||(frase[i]=='e')||(frase[i]=='i')||(frase[i]=='o')||(frase[i]=='u')){
			vocal++;
		}
	}
	
	cout<<"Total vocales: "<<vocal;
	
	
	
	
	
	
}

