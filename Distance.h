#pragma once

//
// Distance calculating class - John Meehan 2013
//

#include <math.h>
class Distance
{
public:
	Distance(void);
	virtual ~Distance(void);

	double haversine(double, double, double, double);
	double pythagores(double, double, double, double);
	//double polar_coordinate_flat_earth_formula(double, double, double, double);
	
private:
	inline double earthradius(){return 6378.137;}//KILOMETERS 
	//inline double pi(){ return atan(1)*4; }
	inline double pi(){return 3.141592653589793238462; }
};

