#ifndef hflow
#define hflow

#include <set>

using namespace std;

//basically a DISPATCHER

class living;

template <class T>
class flow 
{
	

	public:
		void   subscribe(living*);	
		void unsubscribe(living*);	




	private:
		static set<living*>* L_set();






};
























#endif
