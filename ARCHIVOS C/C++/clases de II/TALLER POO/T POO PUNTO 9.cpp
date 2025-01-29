#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<ctime>
using namespace std;

class Cuenta
{
	private:
		int num_cuenta;
		string nombre_cliente;
		float saldo;
	public:
		Cuenta(int, string);
		void depositar();
		void retirar();
		float getSaldo();
		void setSaldo(float);
		virtual void consultar();	
};

Cuenta::Cuenta(int _num_cuenta, string _nombre_cliente)
{
	num_cuenta = _num_cuenta;
	nombre_cliente = _nombre_cliente;
}

void Cuenta::depositar()
{
	float nuevo_saldo_sumar;
	cout<<"DIGITE EL VALOR A DEPOSTITAR: ";	cin>>nuevo_saldo_sumar;
	saldo += nuevo_saldo_sumar;
}

void Cuenta::retirar()
{
	float valor_retiro;
	cout<<"DIGITE EL VALOR A RETIRAR: ";	cin>>valor_retiro;
	if(valor_retiro>saldo)
	{
		cout<<"SALDO INSUFICIENTE [:( ]"<<endl;
	}
	else
	{
		saldo -= valor_retiro;
		cout<<"HAS RETIRADO "<<valor_retiro<<" DE TU CUENTA"<<endl;
	}
}

void Cuenta::setSaldo(float _saldo)
{
	saldo = _saldo;
}
float Cuenta::getSaldo()
{
	return saldo;
}

void Cuenta::consultar()
{
	cout<<"\t\tMOSTRANDO DATOS DE LA CUENTA"<<endl;
	cout<<"NOMBRE DEL CLIENTE: "<<nombre_cliente<<endl;
	cout<<"NÚMERO DE CUENTA: "<<num_cuenta<<endl;
	cout<<"SALDO DE LA CUENTA: "<<saldo<<endl;
	
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------

class CuentaAhorro : public Cuenta
{
	private:
		int dia_ven, mes_ven, anio_ven;
		float porcj_int_men;
		int dia_crea, mes_crea, anio_crea;
	public:
		CuentaAhorro(int, string, int, int, int, float, int, int, int);
		void depositar_ahorro();
		void retirar_ahorro();
		void consultar();
			
};

CuentaAhorro::CuentaAhorro(int _num_cuenta, string _nombre_cliente,  int _dia_ven, int _mes_ven, int _anio_ven, float _interes, int _dia_crea, int _mes_crea, int _anio_crea) : Cuenta(_num_cuenta, _nombre_cliente)
{
	dia_ven = _dia_ven;
	mes_ven = _mes_ven;
	anio_ven = _anio_ven;
	porcj_int_men = _interes;
	dia_crea = _dia_crea;
	mes_crea = _mes_crea;
	anio_crea = _anio_crea;
}

void CuentaAhorro::depositar_ahorro()
{
	float aux;
	aux = getSaldo();
	int dia_actual;
	time_t 	now= time(NULL);
	struct	tm *time= localtime(&now);
    dia_actual = (time->tm_mday);
    
    if(dia_actual==1)
    {
    	
		aux +=  (porcj_int_men * aux);
		setSaldo(aux);
		cout<<"EL INTERES MENSUAL SE HA DEPOSITADO CORRECTAMENTE"<<endl;
	}
	else
	{
		cout<<"HOY NO SE PUEDE DEPOSITAR EL INTERES MENSUAL"<<endl;
	}
   
}

void CuentaAhorro::retirar_ahorro()
{
	int dia_actual, mes_actual, anio_actual;
	time_t 	now= time(NULL);
	struct	tm *time= localtime(&now);
	anio_actual = (time->tm_year+1900);
	mes_actual = (time->tm_mon+1);
	dia_actual = (time->tm_mday);
	
	if((dia_actual==dia_ven) && (mes_actual==mes_ven) && (anio_actual==anio_ven))
	{
		cout<<"PUEDE RETIRAR TODA SU PLATA"<<endl;
	}
	else
	{
		cout<<"NO PUEDE RETIRAR [:( ]"<<endl;
	}
	
}

void CuentaAhorro::consultar()
{
	Cuenta::consultar();
	cout<<"TIPO DE CUENTA: CUENTA DE AHORRO"<<endl;
	cout<<"LA FECHA DE CREACIÓN ES: DIA "<<dia_crea<<" DEL MES "<<mes_crea<<" DEL AÑO "<<anio_crea<<endl;
	cout<<"LA FECHA DE VENCIMIENTO ES: DIA "<<dia_ven<<" DEL MES "<<mes_ven<<" DEL AÑO "<<anio_ven<<endl<<endl<<endl<<endl;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------

class CuentaCheque : public Cuenta
{
	private:
		float comision;
	public:
		CuentaCheque(int, string, float);
		void emison_cheque();
		void consultar();
};

CuentaCheque::CuentaCheque(int _num_cuenta, string _nombre_cliente, float _comision) : Cuenta(_num_cuenta, _nombre_cliente)
{
	comision = _comision;
}

void CuentaCheque::emison_cheque()
{
	float aux;
	aux = getSaldo();
	if(aux>comision)
	{
		aux -= comision;
		setSaldo(aux);
		cout<<"CHEQUE EMITIDO"<<endl;
	}
	else
	{
		cout<<"SALDO INSUFICIENTE [:( ]"<<endl;
	}
}

void CuentaCheque::consultar()
{
	Cuenta::consultar();
	cout<<"LA COMISIÓN POR EMISIÓN DE CHEQUE ES: "<<comision<<endl<<endl<<endl<<endl;
}

int main()
{
	setlocale(LC_ALL,"");
	system("color 0b");
	
	CuentaAhorro cuenta1 = CuentaAhorro(12345, "CRISTIAN", 12, 12, 2020, 0.15, 12, 12, 2018);
	cuenta1.setSaldo(0);
	cuenta1.depositar();
	cuenta1.depositar_ahorro();
	cuenta1.retirar();
	cuenta1.retirar_ahorro();
	cuenta1.consultar();
	getch();
	
	
	CuentaCheque cuenta2 = CuentaCheque(54321, "YAN COGOLLO", 2000);
	cuenta2.setSaldo(0);
	cuenta2.depositar();
	cuenta2.retirar();
	cuenta2.emison_cheque();
	cuenta2.consultar();
	
	
	
	getch();
}

