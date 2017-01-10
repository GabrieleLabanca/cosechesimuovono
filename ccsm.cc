#include "world/world.h"
#include "turn/turn.h"
#include "living.h"

using namespace std;


int main ()
{
	//create world
	world petri(100);
	petri.display();
	//turn day; not needed if realize() is static

	living cell(20,20, petri);
	petri.display();


	for(int i=0; i<10; i++)
	{
		turn::realize();
		petri.display();
	}


















	return 0;
}
