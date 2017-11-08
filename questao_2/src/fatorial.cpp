#include <iostream>
#include "fatorial.h"
using namespace std;
int fatorial(int x) {
	if(x==1){
		return 1;
	}
	return x*fatorial(x-1);
}