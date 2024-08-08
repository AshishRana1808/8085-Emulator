#include "header/MASTER.h"
#include <string>
using namespace std;


bool validityAddress(string data)
{
	/*
	* Function to check the validity of the address ( data ).
	* If the characters at each index is a hexadecimal character i.e., lie b/w 0 to 9 or A to F then it is vald
	*/
	bool flag;
	int l=data.length();

	if (data.empty()) return false; // if the string is empty return false

	for(int i=0; i<l; i++){
	// the hexadecimal value needs to be converted into uppercase .
		data[i] = data[i].toupper(); // convert to upper case;
		if(( data[i]>='0' && data[i]<='9')||( data[i]>='A' && data[i]<='F' ))
			flag = true;
		else{
			flag = false;
			break;
		}
	}
	return flag; // dummy return statement
}
