#ifndef GeomConvHelper_h
#define GeomConvHelper_h
//---------------------------------------------------------------------------//
//                        GeomConvHelper.h -
//  Some helping functions for geometry parsing
//                           -------------------
//  project              : SUMO - Simulation of Urban MObility
//  begin                : Sept 2003
//  copyright            : (C) 2003 by Daniel Krajzewicz
//  organisation         : IVF/DLR http://ivf.dlr.de
//  email                : Daniel.Krajzewicz@dlr.de
//---------------------------------------------------------------------------//

//---------------------------------------------------------------------------//
//
//   This program is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation; either version 2 of the License, or
//   (at your option) any later version.
//
//---------------------------------------------------------------------------//
// $Log$
// Revision 1.2  2003/12/09 11:32:50  dkrajzew
// documentation added
//
//
/* =========================================================================
 * included modules
 * ======================================================================= */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif // HAVE_CONFIG_H

#include <string>
#include <utils/geom/Position2DVector.h>


/* =========================================================================
 * class definitions
 * ======================================================================= */
/**
 * @class GeomConvHelper
 * This class holds some helping functions for the parsing of geometries
 */
class GeomConvHelper {
public:
    /** @brief This method builds a Position2DVector from a string representation
        It is assumed, the vector is stored as "x,y{ x,y}*" where x and y are
        floats. */
    static Position2DVector parseShape(const std::string &shpdef);

};


/**************** DO NOT DEFINE ANYTHING AFTER THE INCLUDE *****************/
//#ifndef DISABLE_INLINE
//#include "GeomConvHelper.icc"
//#endif

#endif

// Local Variables:
// mode:C++
// End:

