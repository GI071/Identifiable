#include <iostream>
#include "Identifiable.h"

using namespace std;


int counter;
int id;
		
Identifiable::Identifiable() {counter += 1;	id += 1;}
Identifiable::~Identifiable(){counter -= 1;};


int Identifiable::counter = 0;
int Identifiable::id = 0;
