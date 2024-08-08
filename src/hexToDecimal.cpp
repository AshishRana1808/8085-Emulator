#include "MASTER.h"
#include <string>

void hexToDecimal( string pc, int arr[] ){
	// converts hexadecimal to decimal value
	// arr[] - this array is being passed by reference so the 
	// result will directly be stored into the array
	int l = pc.length();
	int p = 0;

	for(int i =0; i<l; i++){
		if(pc[i]>='0' && pc[i]<='9')
			arr[i] = pc[i] - '0';
		else 
			arr[i] = 10 + (pc[i] - 'A'); 
	}
}
