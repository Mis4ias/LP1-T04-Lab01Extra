#include "area.h"
#include <iostream>
#include <cmath>
using namespace std;


float triangulo_area(float lado){
	return pow(lado,2.0)/2;
}
float retangulo_area(float base ,float altura){
	return base*altura;
}
float quadrado_area(float lado){
	return pow(lado,2.0);
}
float circulo_area(float raio){
	return 3.1415*pow(raio,2.0);
}
float piramide_area(float comp_base,float alt_lado){
	return quadrado_area(comp_base)*comp_base*alt_lado*4;
}
float cubo_area(float aresta){
	return 6*pow(aresta,2.0);
}
float paralele_area(float aresta1,float aresta2,float aresta3){
	return(2*aresta1*aresta2)+(2*aresta1*aresta3)+(2*aresta2*aresta3);
}
float esfera_area(float raio){
	return 4*3.1415*pow(raio,2.0);
}
