#include <stdlib.h>
#include <math.h>
#include "complex.h"

complex a,b,c,d,e,f;
struct{
	char name;
	complex *num;
} numbers[]={
	{'A', &a}
	{'B', &b}
	{'C', &c}
	{'D', &d}
	{'E', &e}
	{'F', &f}
	{'#', NULL}
};
void num_prn(ptr num);

