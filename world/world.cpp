#include "world.h"

world::world(int dimension):
	D( dimension),
	grid( new vector<vector<place*>*> )
{
	n_iteration = 0;
	// fill grid with places
	grid->reserve(D);
	for(int i=0; i<D; i++){
		vector<place*>* t_line = new vector<place*>; 
		t_line->reserve(D);
		for(int j=0; j<D; j++){
			place * t_place = new place('0');
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
	cout << "Iteration " << n_iteration << endl;
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


char world::draw(place* P)
{
	char sign;

	switch(P->L_list->size()){
		case 0: sign = '_'; break;
		case 1: sign = 'X'; break;
	}	

	return sign;
}


