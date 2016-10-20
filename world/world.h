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
		vector<vector<place*>*> * grid = new vector<vector<place*>*>;

		int D;

    int	n_iteration;

		char draw(place*); 							//reads the list of livings in a place and draws the corresponding code






};



















#endif




