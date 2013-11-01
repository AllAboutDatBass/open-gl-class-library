/*
OpenGL Class Library (dlrOpenGL) - A library of classes for 
	representing objects in 3D space

Copyright (C) 2002  Daniel Randall

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "common.h"
#include "dlrColor.h"

dlrColor::dlrColor()
{
   m_dColor[ RED   ] = 0;
   m_dColor[ GREEN ] = 0;
   m_dColor[ BLUE  ] = 0;
   m_dColor[ ALPHA ] = 0;
   
   m_bDefined = false;
}

dlrColor::dlrColor( 
   dlrColor& crCopy )
{
   m_dColor[ RED   ] = crCopy.m_dColor[ RED   ];
   m_dColor[ GREEN ] = crCopy.m_dColor[ GREEN ];
   m_dColor[ BLUE  ] = crCopy.m_dColor[ BLUE  ];
   m_dColor[ ALPHA ] = crCopy.m_dColor[ ALPHA ];

   m_bDefined = crCopy.m_bDefined;
}

dlrColor::dlrColor( 
   GLfloat dColor[ 4 ] )
{
   m_dColor[ RED   ] = dColor[ RED   ];
   m_dColor[ GREEN ] = dColor[ GREEN ];
   m_dColor[ BLUE  ] = dColor[ BLUE  ];
   m_dColor[ ALPHA ] = dColor[ ALPHA ];

   m_bDefined = true;
}

dlrColor::dlrColor( 
   GLfloat dRed,
   GLfloat dGreen,
   GLfloat dBlue,
   GLfloat dAlpha )
{
   m_dColor[ RED   ] = dRed;
   m_dColor[ GREEN ] = dGreen;
   m_dColor[ BLUE  ] = dBlue;
   m_dColor[ ALPHA ] = dAlpha;

   m_bDefined = true;
}

const dlrColor& dlrColor::operator = ( const dlrColor& crSrc )
{
   m_dColor[ RED   ] = crSrc.m_dColor[ RED   ];
   m_dColor[ GREEN ] = crSrc.m_dColor[ GREEN ];
   m_dColor[ BLUE  ] = crSrc.m_dColor[ BLUE  ];
   m_dColor[ ALPHA ] = crSrc.m_dColor[ ALPHA ]; 

   m_bDefined = crSrc.m_bDefined;

   return (*this);
}

const dlrColor& dlrColor::operator = ( const GLfloat dColor[ 4 ] )
{
   m_dColor[ RED   ] = dColor[ RED   ];
   m_dColor[ GREEN ] = dColor[ GREEN ];
   m_dColor[ BLUE  ] = dColor[ BLUE  ];
   m_dColor[ ALPHA ] = dColor[ ALPHA ];

   m_bDefined = true;

   return (*this);
}
