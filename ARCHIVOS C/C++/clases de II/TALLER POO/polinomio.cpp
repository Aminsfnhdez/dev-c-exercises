#include<iostream>
using namespace std;

struct nodoPoly{ // un nodo es un termino del polinomio
float coef; // coeficiente
int exp; // exponente
struct nodoPoly *sig; // es recursiva pues se referencia asi misma
};
//_________________________________________________________________________________________________________
typedef struct nodoPoly *POLY;
class polinomio{
public:
void creaPoly(); // crear un polinomio
void creaNodoPoly(float, int); // crea un termino del polinomio
polinomio const_mult_poly(float); // constante por polinomio
polinomio sumaPoly(polinomio, polinomio); // suma de polinomio 
polinomio monomioXpolinomio(float,int, polinomio); // monomio por polinomio
void printPoly(); // imprimir terminos del polinomio
private:
POLY primero; //puntero al primer termino del polinomio
POLY ultimo; //puntero al ultimo termino del polinomio
};

POLY vector[10];
//______________________________________________________________________________________________________
//definicion de funciones miembro
void polinomio :: creaNodoPoly(float co, int ex)
{
POLY t; //nuevo termino;
t = new nodoPoly; // asignacion dinamica
//almacenar datos
t->coef = co;
t->exp = ex;
t->sig = NULL;
if (ultimo == NULL)
primero = t;
else
ultimo->sig = t;
ultimo = t;
}
//crear un polinomio
void polinomio :: creaPoly()
{
float co;
int ex, n;
ultimo = NULL;
cout<<"Ingrese numero de terminos del polinomio: ";
cin>>n;
for (int i = 0; i<n; i++)
{ cout<<"\nIngrese coeficiente: "; cin>>co;
cout<<"Ingrese exponente: "; cin>>ex;
// crear nuevo nodo del polinomio
creaNodoPoly(co, ex);
}
}
//______________________________________________________________________________________________________
void polinomio :: printPoly()
{
POLY actual;
actual = primero;
cout<<"\nP(x) = ";
while( actual != NULL)
{ if (actual -> exp == 0) // ultimo termino
cout<<actual->coef;
else // otro termino
cout<<actual->coef<<"X^"<<actual->exp<<" + ";
actual = actual->sig;
}
cout<<endl;
}
//______________________________________________________________________________________________________
polinomio polinomio :: const_mult_poly( float con )
{
float c;
POLY p;
p = primero;
ultimo = NULL;
while (p != NULL)
{ c = con * p->coef;
if (c != 0)
creaNodoPoly(c, p->exp);
p = p->sig;
}
return *this;
}
//______________________________________________________________________________________________________
polinomio polinomio :: sumaPoly( polinomio a,polinomio b)
{
float c;
POLY p, q;
p = a.primero;
q = b.primero;
ultimo = NULL;
while (p != NULL && q != NULL)
{ if (p->exp == q->exp)
{ c = p->coef + q->coef;
if (c != 0)
creaNodoPoly(c,p->exp);
p = p->sig;
q = q->sig;
}else
if (p->exp > q->exp)
{ creaNodoPoly(p->coef, p->exp);
p = p->sig;
}
else {
creaNodoPoly(q->coef, q->exp);
q = q->sig;
}
}
while( p != NULL)
{ creaNodoPoly(p->coef, p->exp);
p = p->sig;
}
while( q != NULL)
{ creaNodoPoly(q->coef, q->exp);
q = q->sig;
}
return *this;
}
//______________________________________________________________________________________________________
polinomio polinomio :: monomioXpolinomio(float co,int ex, polinomio a)
{
float c;
int d;
POLY p;
p = a.primero;
ultimo = NULL;
while (p != NULL)
{ c = co * p->coef;
d = ex + p->exp;
if (c != 0)
creaNodoPoly(c,d);
p = p->sig;
}
return *this;
}
//______________________________________________________________________________________________________

main()
{
	
}
