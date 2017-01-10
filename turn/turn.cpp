#include "turn.h"

//N.B. if used in other files, write extern int n_iteration;
int n_iteration = 0; // declared out of scope->static storage, external linkage

void turn::realize()
{
	cout << "Turn " << n_iteration << endl;

	set<living*>::iterator it = L_set()->begin();
	set<living*>::iterator ie = L_set()->end();

	while(it != ie) (*it++)->think();

	it = L_set()->begin();
	while(it != ie) (*it++)->move();

	it = L_set()->begin();
	while(it != ie) (*it++)->act();

	n_iteration++;
}

static set<living*>* turn::L_set()
{
	static set<living*>* ptr = new set<living*>;
	return ptr;
}

void turn::subscribe(living * L)
{
	L_set()->insert(L);
}

void turn::unsubscribe(living * L)
{
	L_set()->erase(L);
}
