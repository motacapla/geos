//Compile with: $ g++ test.cpp -I /Users/tikeda/Coding/C++/GEOS/geos3.7.1/include -I /Users/tikeda/Coding/C++/GEOS/geos-3.7.1/include -L geos3.7.1/lib/ -std=c++11 -lgeos

#include <geos_c.h>

#include <geos/geom/PrecisionModel.h>
#include <geos/geom/GeometryFactory.h>
#include <geos/geom/Geometry.h>
#include <geos/geom/Point.h>
#include <geos/geom/LinearRing.h>
#include <geos/geom/LineString.h>
#include <geos/geom/Polygon.h>
#include <geos/geom/GeometryCollection.h>
#include <geos/geom/Coordinate.h>
#include <geos/geom/CoordinateSequence.h>
#include <geos/geom/CoordinateArraySequence.h>
#include <geos/geom/IntersectionMatrix.h>
#include <geos/io/WKBReader.h>
#include <geos/io/WKBWriter.h>
#include <geos/io/WKTWriter.h>
#include <geos/util/GeometricShapeFactory.h>
#include <geos/geom/util/SineStarFactory.h>
#include <geos/util/GEOSException.h>
#include <geos/util/IllegalArgumentException.h>
#include <geos/opLinemerge.h>
#include <geos/opPolygonize.h>

#include <vector>
#include <sstream>
#include <iomanip>
#include <cstdlib> // exit()

using namespace std;
using namespace geos;
using namespace geom;

GeometryFactory::Ptr global_factory;

// it doesnt work anymore
/*
geos::geom::Polygon* MakeBox(double xmin, double ymin, double xmax, double ymax){
  
  geos::geom::GeometryFactory factory;
  geos::geom::CoordinateSequence* temp = factory.getCoordinateSequenceFactory()->create((std::size_t) 0, 0);

  temp->add(geos::geom::Coordinate(xmin, ymin));
  temp->add(geos::geom::Coordinate(xmin, ymax));
  temp->add(geos::geom::Coordinate(xmax, ymax));
  temp->add(geos::geom::Coordinate(xmax, ymin));
  //Must close the linear ring or we will get an error:
  //"Points of LinearRing do not form a closed linestring"
  temp->add(geos::geom::Coordinate(xmin, ymin));

  geos::geom::LinearRing *shell=factory.createLinearRing(temp);

  //NULL in this case could instead be a collection of one or more holes
  //in the interior of the polygon
  
  return factory.createPolygon(shell,NULL);
  
}


Point*
create_point(double x, double y)
{
    Coordinate c(x, y);
    Point* p = global_factory->createPoint(c);
    return p;
}

//
// This function uses GeometricShapeFactory to render
// a rectangle having lower-left corner at given coordinates
// and given sizes.
//
Polygon*
create_rectangle(double llX, double llY, double width, double height)
{
    geos::util::GeometricShapeFactory shapefactory(global_factory.get());
    shapefactory.setBase(Coordinate(llX, llY));
    shapefactory.setHeight(height);
    shapefactory.setWidth(width);
    shapefactory.setNumPoints(4); // we don't need more then 4 points for a rectangle...
    // can use setSize for a square
    return shapefactory.createRectangle();
}


//
// This function will create a GeometryCollection
// containing copies of all Geometries in given vector.
//
GeometryCollection*
create_simple_collection(vector<Geometry*>* geoms)
{
    return global_factory->createGeometryCollection(*geoms);
    // if you wanted to transfer ownership of vector end
    // its elements you should have call:
    // return global_factory->createGeometryCollection(geoms);
}
*/

int main(){
  
  Polygon* poly;
  CoordinateSequence *cl = new geos::geom::CoordinateArraySequence();

  /*
  Point* point;
  Coordinate c(0.0, 0.0);
  point = global_factory->createPoint(c);
  */

  cout << "hoge" << endl;
  
  vector<Geometry*>* geoms = new vector<Geometry*>;

  vector<Geometry*>* newgeoms;
  /*
  // precision model is 何?
  // Define a precision model using 0,0 as the reference origin
  // and 2.0 as coordinates scale.
  PrecisionModel* pm = new PrecisionModel(2.0, 0, 0);

  cout << "hoge" << endl;
  
  // Initialize global factory with defined PrecisionModel
  // and a SRID of -1 (undefined).
  global_factory = GeometryFactory::create(pm, -1);  

    
  geoms->push_back(create_point(150, 350));
  geoms->push_back(create_rectangle(-5, -5, 10, 20)); // a rectangle
  
  geoms->push_back(create_simple_collection(geoms));
  
  cout << "   CONTAINS   ";
  for(unsigned int i = 0; i < geoms->size(); i++) {
    cout << "\t[" << i << "]";
  }
  cout << endl;
  for(unsigned int i = 0; i < geoms->size(); i++) {
    Geometry* g1 = (*geoms)[i];
    cout << "      [" << i << "]\t";
    for(unsigned int j = 0; j < geoms->size(); j++) {
      Geometry* g2 = (*geoms)[j];
      try {
	if(g1->contains(g2)) {
	  cout << " 1\t";
	}
	else {
	  cout << " 0\t";
	}
      }
      catch(const exception& exc) {
	cerr << exc.what() << endl;
      }
    }
    cout << endl;
  }

  */

  return 0;  
}
