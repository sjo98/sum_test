#include "sum.h"

int sum(int n){
	int result=0;
	for(int i=1; i<=n; i++)
		result=result+i;
	return result;	
}
