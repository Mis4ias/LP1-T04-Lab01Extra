#include <iostream>
#include "calcula.h"
#include "area.h"
#include "perimetro.h"
#include "volume.h"
using namespace std;
float triangulo_calcula(){
	float lado;
	cout<<"Digite o comprimento do lado :";
	cin>>lado;
	cout<<"Area do Triangulo:"<<triangulo_area(lado)<<endl;
	cout<<"Perimetro do Triangulo:"<<triangulo_perimetro(lado)<<endl;
}
float retangulo_calcula(){
	float base,altura;
	cout<<"Digite o comprimento da base:";
	cin>>base;
	cout<<"Digite a altura";
	cin>>altura;
	cout<<"Area do Retangulo:"<<retangulo_area(base,altura)<<endl;
	cout<<"Perimetro do Retangulo:"<<retangulo_perimetro(base,altura)<<endl;
}
float quadrado_calcula(){
	float lado;
	cout<<"Digite o comprimento do lado :";
	cin>>lado;
	cout<<"Area do Quadrado:"<<quadrado_area(lado)<<endl;
	cout<<"Perimetro do Quadrado:"<<quadrado_perimetro(lado)<<endl;
}
float circulo_calcula(){
	float raio;
	cout<<"Digite o comprimento do raio :";
	cin>>raio;
	cout<<"Area do Circulo:"<<circulo_area(raio)<<endl;
	cout<<"Perimetro do Circulo:"<<circulo_perimetro(raio)<<endl;
}
float piramide_calcula(){
	float comp_base,alt_lado;
	cout<<"Digite o comprimento da base:";
	cin>>comp_base;
	cout<<"Digite a altura de um dos lados";
	cin>>alt_lado;
	cout<<"Area da Piramide:"<<piramide_area(comp_base,alt_lado)<<endl;
	cout<<"Volume da Piramide:"<<piramide_volume(comp_base,alt_lado)<<endl;
}
float cubo_calcula(){
	float aresta;
	cout<<"Digite o comprimento da aresta :";
	cin>>aresta;
	cout<<"Area do Cubo:"<<cubo_area(aresta)<<endl;
	cout<<"Volume do Cubo:"<<cubo_volume(aresta)<<endl;
}
float paralele_calcula(){
	float aresta1,aresta2,aresta3;
	cout<<"Digite o comprimento da Aresta 1:";
	cin>>aresta1;
	cout<<"Digite o comprimento da Aresta 2:";
	cin>>aresta2;
	cout<<"Digite o comprimento da Aresta 3:";
	cin>>aresta3;
	cout<<"Area do Paralelepipedo"<<paralele_area(aresta1,aresta2,aresta3)<<endl;
	cout<<"Volume do Paralelepipedo"<<paralele_volume(aresta1,aresta2,aresta3)<<endl;
}
float esfera_calcula(){
	float raio;
	cout<<"Digite o comprimento do raio :";
	cin>>raio;
	cout<<"Area da Esfera"<<esfera_area(raio)<<endl;
	cout<<"Volume da Esfera"<<esfera_volume(raio)<<endl;
}