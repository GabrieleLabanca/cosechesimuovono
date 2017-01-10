#include "place.h"


place::place (world* W, char type = '0'):
	atlas(W),
	L_list( new set<living*> )
{
	if (type == '0') walkable = true;	
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

void place::move_in(living* newL)
{
	L_list->insert(newL);
}

void place::move_out(living* oldL)
{
	L_list->erase(oldL);
}

bool place::operator==(/*const place* P1,*/  place* P2)
{
	if( this->get_coordinates() == P2->get_coordinates() ) return true;
	else return false;
}

coordinate& place::get_coordinates()
{
	return atlas->get_coordinates(this);
}

place* place::get_place(coordinate& C)
{
	return atlas->get_place(C);
}
