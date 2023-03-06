#include <iostream>
#include <string>
#include <sys/types.h>
#include <iomanip>
#include <vector>


#include "main.h"



int main()
{
	maringo mar;
	mar.welcome();
	shop sho;
	sho.items();
	sho.recipt();
	Games games;
	games.run_facilitation_fee();
	games.damages();
	games.damages_recipt();
}

