#ifndef IDENTIFIABLE_H
#define IDENTIFIABLE_H

#include <iostream>
using namespace std;

class Identifiable {
	public:
		static int counter;
		static int id;
		Identifiable();
		~ Identifiable();
};

#endif

