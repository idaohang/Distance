A C++ Distance calculating class
===============================

This class implements 
- Haversine (Great circle distance)
- Pythagores Therom  


Formulas used:
The Haversine Formula (from R. W. Sinnott, "Virtues of the Haversine," Sky and Telescope, vol. 68, no. 2, 1984, p. 159): 
  dlon = lon2 - lon1
  dlat = lat2 - lat1
  a = (sin(dlat/2))^2 + cos(lat1) * cos(lat2) * (sin(dlon/2))^2
  c = 2 * atan2(sqrt(a), sqrt(1-a)) 
  d = R * c

c is the great circle distance in radians.
R is the radius of the earth. if you want a miles result use miles for this if you want km use km etc.

This code uses Kilometers and an approximate equatorial radius for earth to be 6378.137 km.

John Meehan 11/3/13