#include "world.h"

world::world(int dimension):
	D( dimension),
	grid( new vector<vector<place*>*> )
{
	// fill grid with places
	grid->reserve(D);
	for(int i=0; i<D; i++){
		vector<place*>* t_line = new vector<place*>; 
		t_line->reserve(D);
		for(int j=0; j<D; j++){
			place * t_place = new place(this,'0');
			t_line->push_back(t_place);
		}
		grid->push_back(t_line);
	}
}

world::~world()
{
	//delete vectors
	for(int i=0; i<D; i++){
		for(int j=0; j<D; j++){
			delete grid->at(i)->at(j);
		}
		delete grid->at(i);
	}
	delete grid;


}


void world::display()
{
	for(int i=0; i<D; i++){
		for(int j=0; j<D; j++){
			// draws the graphic code for the place (i,j) selected: place needs a list of livings in it
			// 																											draw  reads this list 
			cout << draw(grid->at(i)->at(j));
		}
		cout << endl; 
  }
	return;
}


coordinate& world::get_coordinates(place * P)
{
	coordinate coord;

	for(int i=0; i<D; i++){
		for(int j=0; j<D; j++){
			if ( (grid->at(i)->at(j)) == P ) {
				coord.x = i;
				coord.y = j;
			}
		}
	}

	coordinate& C = coord;
	return C;
}


place* world::get_place(coordinate& C)
{
	return grid->at(C.x)->at(C.y);
}



char world::draw(place* P)
{
	char sign;

	switch(P->L_list->size()){
		case 0: sign = '_'; break;
		case 1: sign = 'X'; break;
	}	

	return sign;
}


