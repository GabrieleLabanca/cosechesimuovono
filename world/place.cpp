#include "place.h"

place::place (char type = '0'):
 L_list( new vector<living*> )
{
	L_list->reserve(0);
	if (type == '0') walkable = false;	
}

place::~place ()
{
	
	/* ATTEMPT to delete elements, but gets a warning
	 *
	int sizeoflist = L_list->size();
	if(sizeoflist>0){
		for(unsigned int i=0; i<sizeoflist; i++){
			delete L_list->at(i);
		}
	}
	*/
	delete L_list;
}
