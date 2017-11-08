#include <iostream>
#include "volume.h"
#include "area.h"
#include <cmath>
using namespace std;
float piramide_volume(float comp_base,float alt_lado){
	return quadrado_area(comp_base)*alt_lado;
}
float cubo_volume(float aresta){
	return pow(aresta,3.0);
}
float paralele_volume(float aresta1,float aresta2,float aresta3){
	return aresta1*aresta2*aresta3;
}
float esfera_volume(float raio){
	return (4*3.1415*pow(raio,3.0))/3;
}