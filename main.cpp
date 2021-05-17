#include <iostream>
#include "Identifiable.h"
using namespace std;

int main() {
	Identifiable* a = new Identifiable;
	Identifiable* b = new Identifiable;
	Identifiable* c = new Identifiable;
	
	std::cout<<"counter: "<<Identifiable::counter<<std::endl;
	std::cout<<"id: "<<Identifiable::id<<std::endl;
	
	delete a;
	delete b;
	delete c;
	
	std::cout<<"counter: "<<Identifiable::counter<<std::endl;
	std::cout<<"id: "<<Identifiable::id<<std::endl;
	
	return 0;
}

