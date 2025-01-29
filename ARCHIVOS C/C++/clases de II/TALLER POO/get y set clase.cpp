//implementacion con Get y set.  get para obtener el valor de un atributo y set para asignar el valor.
#include<iostream>
#include<stdlib.h>
using namespace std;

class Punto{
	private:
		int x,y;
	public:
		Punto();
		void setPunto(int, int);
		int getX();
		int getY();
		
};
Punto::Punto(){
	
}
void Punto::setPunto(int _x, int _y){
	x=_x;
	y=_y;
}
int Punto::getX(){
	return x;
}
int Punto::getY(){
	return y;
}


int main(){
	Punto punto1;
	punto1.setPunto(3,5);
	cout<<punto1.getX()<<endl;
	cout<<punto1.getY();
	
}

