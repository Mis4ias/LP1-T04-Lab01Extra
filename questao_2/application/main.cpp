#include <iostream>
#include <cstdlib>
#include "primalidade.h"
#include "fatorial.h"

using namespace std;
int main(int argc, char const *argv[]){
	int aux= atoi(argv[1]);
	
	cout<<"Maior numero primo anterior ao fatorial de  "<<argv[1]<<"("<<aux<<") eh"<<primalidade(aux)<<endl;
	return 0;

}