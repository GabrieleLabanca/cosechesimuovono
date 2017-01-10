#include "world/world.h"
#include "turn/turn.h"
#include "living.h"

using namespace std;


int main ()
{
	//create world
	world petri(100);
	petri.display();
	turn day;

	living cell(20,20);
	petri.display();


	for(int i=0; i<10; i++)
	{
		day.realize();
		petri.display();
	}


















	return 0;
}
