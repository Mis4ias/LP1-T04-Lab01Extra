#include <iostream>
#include "calcula.h"
using namespace std;

int main(){
	int aux;
	do{
		cout<<"Calculadora de Geometria Plana e Espacial"<<endl;
		cout<<"(1) Triangulo equilatero"<<endl;
		cout<<"(2) Retangulo"<<endl;
		cout<<"(3) Quadrado"<<endl;
		cout<<"(4) Circulo"<<endl;
		cout<<"(5) Piramide com base quadrangular"<<endl;
		cout<<"(6) Cubo"<<endl;
		cout<<"(7) Paralelepipedo"<<endl;
		cout<<"(8) Esfera"<<endl;
		cout<<"(0) Sair"<<endl;
		cout<<"Digite a sua opcao:"<<endl;
		cin>>aux;
		switch(aux){
		case 0:
			break;
		case 1:
			triangulo_calcula(); //Triangulo equilatero
			break;		
		case 2: 
			retangulo_calcula();//Retangulo
			break;
		case 3:
			quadrado_calcula();//Quadrado
			break;
		case 4: 
			circulo_calcula();//Circulo
			break;
		case 5:
			piramide_calcula(); //Piramide com base quadrangular
			break;
		case 6: 
			cubo_calcula();//Cubo
			break;
		case 7: 
			paralele_calcula();//Paralelepipedo
			break;
		case 8: 
			esfera_calcula();//Esfera
			break;
		}
	
	}
	while(aux!=0);
	

}

float triangulo_calcula();
float retangulo_calcula();
float quadrado_calcula();
float circulo_calcula();
float piramide_calcula();
float cubo_calcula();
float paralele_calcula();
float esfera_calcula();