#ifndef H_LIVING
#define H_LIVING 

#include "../turn/turn.h"
#include "../world/place.h"

class living
{

	friend class turn;

	public:
		living(int, int);
		~living();





	private:
		/*struct direction{
			coordinate& here;
		  coordinate& there;
		};*/
		coordinate& direction;
		place * position;
		void think();
		void move();
		void act();















};






#endif
