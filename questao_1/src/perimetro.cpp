#include <iostream>
#include "perimetro.h"
using namespace std;
float triangulo_perimetro(float lado){
	return 3*lado;
}
float retangulo_perimetro(float base ,float altura){
	return 2*(base+altura);
}
float quadrado_perimetro(float lado){
	return 4*lado;
}
float circulo_perimetro(float raio){
	return 3.1415*raio*2;
}