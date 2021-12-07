
#include <math.h>

#include "sum.h"
#include "dob.h"
#include "var.h"
using namespace nsDob;
using namespace nsVar;
void nsSum::sum() {
	if (x == 0)
		x += dx;
	n = 0;
	a = 1;
	S = a;
	do {
		n++;
		dob();
		S += a;
	} while (fabs(a) >= eps);
}
