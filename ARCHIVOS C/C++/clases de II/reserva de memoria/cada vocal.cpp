#include<iostream>
#include<string.h>
using namespace std;

main(){
	
	char frase[100];
	int n, a=0,e=0,i=0,o=0,u=0;
	
	cout<<"ingrese la frase: ";
	cin.getline(frase, 100, '\n');
	
	n=strlen(frase);
	
	for(int i=0;i<n;i++){
		
		switch(frase[i]){
			
		case 'a': a++;
		break;
			
		case 'e': e++;
		break;
		
		case 'i': i++;
		break;
		
		case 'o': o++;
		break;
		
		case 'u': u++;
		break;
		
			
		}
		
	}
	
	cout<<"Total vocales 'a': "<<a<<endl;
	cout<<"Total vocales 'e': "<<e<<endl;
	cout<<"Total vocales 'i': "<<i<<endl;
	cout<<"Total vocales 'o': "<<o<<endl;
	cout<<"Total vocales 'u': "<<u<<endl;
	
	
}

