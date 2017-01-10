#ifndef hPLACE
#define hPLACE

#include <set>

#include "world.h"
#include "coordinate.h"



using namespace std;

class living;
class world;
class coordinate;

class place {

	friend class world;

	public:
		place(world*, char);
		~place();


		//coordinates are meant in the world grid
		coordinate& get_coordinates(); //returns coordinates of this place 
		place* get_place(coordinate&); //returns the place indexed by given coordinates
		//XXX use world's function if not instantiating place

		void move_in (living*);
		void move_out(living*);

		bool operator==(place*);

	private:
		world * atlas; //the world containing the place
		bool walkable; //says if it is possible to walk over	
		set<living*> * L_list; //list of livings in the place





};






#endif
