/****************************************************************************/
/// @file    NIArtemisParser_Links.h
/// @author  Daniel Krajzewicz
/// @date    Mon, 10 Feb 2003
/// @version $Id$
///
// -------------------
/****************************************************************************/
// SUMO, Simulation of Urban MObility; see http://sumo.sourceforge.net/
// copyright : (C) 2001-2007
//  by DLR (http://www.dlr.de/) and ZAIK (http://www.zaik.uni-koeln.de/AFS)
/****************************************************************************/
//
//   This program is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation; either version 2 of the License, or
//   (at your option) any later version.
//
/****************************************************************************/
#ifndef NIArtemisParser_Links_h
#define NIArtemisParser_Links_h


// ===========================================================================
// included modules
// ===========================================================================
#ifdef _MSC_VER
#include <windows_config.h>
#else
#include <config.h>
#endif

#include "NIArtemisLoader.h"


// ===========================================================================
// class declarations
// ===========================================================================
class NBNodeCont;
class NBEdgeCont;


// ===========================================================================
// class definitions
// ===========================================================================
/**
 * @class NIArtemisParser_Links
 */
class NIArtemisParser_Links :
            public NIArtemisLoader::NIArtemisSingleDataTypeParser
{
public:
    /// Constructor
    NIArtemisParser_Links(NBNodeCont &nc, NBEdgeCont &ec,
                          NIArtemisLoader &parent, const std::string &dataName);

    /// Destructor
    ~NIArtemisParser_Links();

protected:
    /** @brief Parses a single modality type name using data from the inherited NamedColumnsParser. */
    void myDependentReport();

protected:
    NBNodeCont &myNodeCont;
    NBEdgeCont &myEdgeCont;

};


#endif

/****************************************************************************/

