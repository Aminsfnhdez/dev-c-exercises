#include <iostream>

using namespace std;

void alumnos(int);

main()
{
	int cantg;
	cout<<"\nDigite la cantidad de grupos: ";
	cin>>cantg;
	alumnos(cantg);
}

void alumnos(int cgr)
{
	int contg=0,cantal;
	float acumtgr,promtgr; 
	while(contg<cgr)
	{	
		cout<<"\n============ Grupo # "<<contg+1<<" ============"<<endl;
		cout<<"\nDigite la cantidad de alumnos: ";
		cin>>cantal;
		int contal=0,cantmat;
		float acumprgr,promgr;
		while(contal<cantal)
		{
			cout<<"\nEstudiante # "<<contal+1<<endl;
			cout<<"\nDigite la cantidad de materias: ";
			cin>>cantmat;
			int contmat=0,contcal=0;
			float nota,acumal=0,promal=0,acumpral,promgna;
			while(contmat<cantmat)
			{
				cout<<"\nMateria # "<<contmat+1<<endl;
				for(contcal=0;contcal<=2;contcal++)
				{
					cout<<"\nDigite la nota # "<<contcal+1<<": ";
					cin>>nota;
					acumal=acumal+nota;
				}
				promal=acumal/3;
				acumpral=acumpral+promal;
				cout<<"\nPromedio de la materia"<<": "<<promal<<endl;
				acumal=0;
				promal=0;
				contmat++;
			}
			promgna=acumpral/cantmat;
			acumprgr=acumprgr+promgna;
			cout<<"\nPromedio total del estudiante"<<": "<<promgna<<endl;
			acumpral=0;
			promgna=0;
			contal++;
		}
		promgr=acumprgr/cantal;
		acumtgr=acumtgr+promgr;
		cout<<"\nPromedio del grupo"<<": "<<promgr<<endl;
		acumprgr=0;
		promgr=0;
		contg++;
	}
	promtgr=acumtgr/cgr;
	cout<<"\nPromedio total de los grupos"<<": "<<promtgr<<endl;
}


