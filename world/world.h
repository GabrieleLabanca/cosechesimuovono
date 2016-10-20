#ifndef hWORLD
#define hWORLD

#include <iostream>
#include <vector>

#include "place.h"

using namespace std;


class world {


	public:
		world(int dimension);
		~world();
		
    void display();


	private:
		int D;
		vector<vector<place*>*> * grid;


    int	n_iteration;

		char draw(place*); 							//reads the list of livings in a place and draws the corresponding code






};



















#endif




