#include <iostream>
#include <vector>

using namespace std;

class thing 
{
	public:
		int value;




	private:

};

class grid
{
	public: 
		vector<vector<thing * > * > * vec = new vector<vector<thing * > * >;

};

















int main() 
{
	vector<vector<thing*>*> * pv = new vector<vector<thing*>*>;
	grid plane;
	pv = plane.vec;

	pv->reserve(10);
	cerr << "pv->capacity() : " << pv->capacity() << endl; 
	for(int i=0; i<10; i++){
		vector<thing*> * t_line = new vector<thing*>;
		t_line->reserve(10);

		for(int j=0; j<10; j++){
			thing * tt = new thing;
			tt->value = i+j;
			t_line->push_back( tt );
		}

		pv->push_back( t_line );
	}

	for(int i=0; i<10; i++){
			for(int j=0; j<10; j++){
				cout << plane.vec->at(i)->at(j)->value +10 << " ";
		}
		cout << endl;
	}















	return 0;
}
