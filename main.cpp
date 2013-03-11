//
// Distance calculating class - John Meehan 2013
//

#include "Distance.h"
#include <iostream>
using namespace std;


int main(int argc, char* argv[]){
	double lat1, lon1, lat2, lon2;
		//Limerick 52.67322, -8.51670
		//dublin 53.31296, -6.39071
		// correct answer ~159km
	Distance measure;
	double distance;

	if (argc != 5){
		cout << "4 Parameters needed running test code instead.";
		lat1 = 52.67322;
		lon1 = -8.51670;
		lat2 = 53.31296;
		lon2 = -6.39071;
		cout <<"Distance between two GPS locations" << endl;
		cout << "Test Params Limerick to Dublin: "<< measure.haversine(lat1,lon1,lat2,lon2) << "km"<< endl;
	} else {
		lat1 = atof(argv[1]);
		lon1 = atof(argv[2]);
		lat2 = atof(argv[3]);
		lon2 = atof(argv[4]);
		cout << measure.haversine(lat1,lon1,lat2,lon2) << endl;
	}
	return 0; // C unable to return Doubles - system dependant
};
