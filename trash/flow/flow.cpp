#include "flow.h"





void flow::subscribe(living* liv)
{
	L_set()->insert(liv);
}

void flow::unsubscribe(living* liv)
{
	L_set()->erase(liv);
}





static set<living*>* flow::L_set ()
{
	static set<living*>* ptr = new set<living*>;
	return ptr;
}
