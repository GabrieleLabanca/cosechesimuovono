#include "living.h"
#include "coordinate.h"

#include <stdlib.h>

using namespace std;

living::living(int x, int y):
	direction.x(x),
	direction.y(y),
	position( get_place(direction) )
{
	position->move_in(this);
	turn::subscribe(this);
}

living::~living()
{
	turn::unsubscribe(this);
}

void living::think()
{
	//chooses where to go
	//  -select random number [0,8]
	srand(15);
	int direction = rand() % 9;

	//  -get coordinates of position
	//    [position contains the pointer to the world it is in]
	coordinate& here  = position->get_coordinates();
	coordinate& there = here;


	//  -upgrade coordinates depending on selected number
	switch(direction){
		case 0: 
			break;
		case 1: 
			(here.y)++;
			break;
		case 2:
			(here.x)++;
			(here.y)++;
			break;
		case 3:
			(here.x)++;
			break;
		case 4:
			(here.x)++;
			(here.y)--;
			break;
		case 5:
			(here.y)--;
			break;
		case 6:
			(here.x)--;
			(here.y)--;
			break;
		case 7:
			(here.x)--;
			break;
		case 8:
			(here.x)--;
			(here.y)++;
			break;
	}
	
	cerr << "coordinates of " << this << ":\n"
		   << "before: " << there.x << " , " << there.y << endl;
	     << "after: "  << here.x  << " , " << here.y  << endl;

	direction = there;
}


void living::move()
{
	position->move_out(this);	//remove this from the list of old place
	position = position->get_place(here) //upgrade place
  position->move_in(this); //insert this in the list of new place

}


void living::act()
{
}
