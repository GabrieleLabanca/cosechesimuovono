#ifndef H_COORDINATE
#define H_COORDINATE



class coordinate
{
	public: 
	  int x, y;
};

// why multiple definition without inline?
inline bool operator==(const coordinate& C1, const coordinate& C2)
{
  if ( (C1.x == C2.x) and (C1.y == C2.y) ) return true;
	else return false;
}






















#endif
