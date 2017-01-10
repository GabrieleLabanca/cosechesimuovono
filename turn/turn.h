#ifndef H_TURN
#define H_TURN

#include <set>
#include "living.h"

using namespace std;

class living;

class turn 
{
	friend living;

	public:


		static void realize();

		static void subscribe(living *);
		static void unsubscribe(living *);



	private:
	        static set<living*>* L_set();
















};











#endif
