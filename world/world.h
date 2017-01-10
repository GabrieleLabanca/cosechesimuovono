#ifndef hWORLD
#define hWORLD

#include <iostream>
#include <vector>


#include "place.h"
#include "coordinate.h"

using namespace std;

class coordinate;
class place;

class world {


	public:
		world(int dimension);                      //dimension = side of the grid
		~world();
		
    void display();                            //prints the grid

		coordinate& get_coordinates(place*); 

    place* get_place(coordinate&);


	private:
		int D; //store the dimension

	  vector<vector<place*>*> * grid; //the grid 



		

		char draw(place*); //reads the list of livings in a place and draws the corresponding code



};



















#endif




