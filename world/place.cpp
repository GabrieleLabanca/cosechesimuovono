#include "place.h"

place::place (char type = '0')
{
	L_list->reserve(0);
	if (type == '0') walkable = false;	
}
