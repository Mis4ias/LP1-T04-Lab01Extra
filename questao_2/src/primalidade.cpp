#include <iostream>
#include "primalidade.h"
using namespace std;
int primalidade(int p) {
	int x = p-1,i=0;   
	while (x > 1){
		if (p % x == 0){
			i++;
		}
		if(i>2){
			i=0;
			p--;
			x=p;
		}
		x--;      
	}
	if(i<=2){
		return p;
	}

}