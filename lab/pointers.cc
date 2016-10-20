#include <iostream>
#include <vector>

using namespace std;





















int main() 
{
	int num = 4;
	int * pn = new int;
	pn = &num;

	vector<vector<int*>*> * pv = new vector<vector<int*>*>;
	pv->reserve(10);
	cerr << "pv->capacity() : " << pv->capacity() << endl; 
	for(int i=0; i<10; i++){
		vector<int*> * t_line = new vector<int*>;
		t_line->reserve(10);

		for(int j=0; j<10; j++){
			t_line->push_back( pn );
		}

		pv->push_back( t_line );
	}

	int * temp = new int;
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			temp = pv->at(i)->at(j);
			cout << *temp;
		}
		cout << endl;
	}















	return 0;
}
