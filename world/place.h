#ifndef hPLACE
#define hPLACE

#include <vector>

using namespace std;

class living;

class place {

	friend class world;

	public:
		place(char type);
		~place();




	private:
		bool walkable;	
		vector<living*> * L_list = new vector<living*>;





};






#endif
