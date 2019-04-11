#include "Reservoir.h"

int main() {
	
	Reservoir r1(7, 8);
	Reservoir r2(r1);
	Reservoir r3(10, 10);
	
	r1.print();
	r2.print();
	r3.print();
	

	if (r1 == r2) cout << "r1 and r2 are equal" << endl;
	else cout << "r1 and r2 are not equal" << endl;
	if (r1 == r3) cout << "r1 and r3 equal" << endl;
	else cout << "r1 and r3 are not equal" << endl;

	if (r2 < r3) cout << "r2 is smaller" << endl;
	if (r3 > r1) cout << "r3 is greater" << endl;

	r1 += 100;
	r2 -= 4;

	r1.print();
	r2.print();

	system("pause");
}