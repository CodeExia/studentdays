import sys
import docplex.mp

# Store longitude, latitude and street crossing name of each public library location.
class XPoint(object):
    def __init__(self, x, y):
        self.x = x
        self.y = y
    def __str__(self):
        return "P(%g_%g)" % (self.x, self.y)

class NamedPoint(XPoint):
    def __init__(self, name, x, y):
        XPoint.__init__(self, x, y)
        self.name = name
    def __str__(self):
        return self.name

# Calculating the distance
try:
    import geopy.distance
except:
    if hasattr(sys, 'real_prefix'):
        #we are in a virtual env.
        !pip install geopy 
    else:
        !pip install --user geopy

from geopy.distance import great_circle
 
def get_distance(p1, p2):
    return great_circle((p1.y, p1.x), (p2.y, p2.x)).miles
