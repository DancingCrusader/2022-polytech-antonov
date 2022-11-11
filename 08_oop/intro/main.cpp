#include "String.h"
#include <iostream>


using namespace std;


int main() {
	String frst = "String";
	String scnd = " Length:";
	String thrd = frst + scnd;
	cout << thrd << '\t' << thrd.get_length() << endl;
	return 0;
}
