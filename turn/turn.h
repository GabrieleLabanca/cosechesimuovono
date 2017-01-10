#ifndef H_TURN
#define H_TURN

#include <set>

using namespace std;

class living;

class turn 
{
	friend class living;

	public:
		void realize();

		void subscribe(living *);
		void unsubscribe(living *);



	private:
		static set<living*>* L_set();
















};











#endif
