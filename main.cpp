using namespace std;
#include <iostream>
#include<iomanip>
#include"Sobre.h"
#include"Paquete.h"



int main()
{
    	 
	 Envio numero1("Pablo Erhard", "Av.Jose Vasconcelos 710", "Monterrey", "NL", 66220, 
    	"Mauricio Lozano", "Matamoros 930", "Monterrey", "Nuevo Leon", 66235 , 150.00);
	
	
	 Paquete numero2("Pablo Erhard", "Av.Jose Vasconcelos 710", "Monterrey", "NL", 66220, 
    	"Mauricio Lozano", "Matamoros 930", "Monterrey", "Nuevo Leon", 66235 , 150.00, 10,10,10,10,5);
	

   	 Sobre numero3 ("Pablo Erhard", " Av.Jose Vasconcelos 710", "Monterrey", "Nuevo Leon", 66254, 
    	"Mauricio Lozano", "Matamoros 930", "Monterrey", "NL", 66235, 75, 50, 40 , 40  );


	Envios * listaEnv[3];
  
	listaEnv[0] = &numero1;		listaEnv[1] = &numero2;	      
  	listaEnv[2] = &numero3;
  
	for(int i = 0; i < 3; i++)
	{	cout<<"#"<<i<<" Costo: ";
		cout << listaEnv[i]->calculoCosto();
		cout<<endl;
	}
}
