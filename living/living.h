#ifndef H_LIVING
#define H_LIVING 

#include "../turn/turn.h"
#include "../world/place.h"

class turn;
class world;

class living
{

	friend class turn;
	friend class world;

	public:
		living(int, int, world);
		~living();

		void debug(){};



	private:
		/*struct direction{
			coordinate& here;
		  coordinate& there;
		};*/
		coordinate direction;
		coordinate here;
		place * position;
		void think();
		void move();
		void act();















};






#endif
