#include <iostream>
#include "Header.h"

using namespace std;

int main(void) {
	vec3<int> vector(3, 5, 6);
	vector.print;
	if (vector.is_zero) cout << "true" << endl;
	else cout << "false" << endl;
	vector.normalize;
	vector.print;
	vector.zero;
	if (vector.is_zero) cout << "true" << endl;
	else cout << "false" << endl;

	system("pause");
	return 0;
}