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
#include "dlrPoint.h"
#include "dlrVector.h"
#include "dlrColor.h"
#include "dlrPolygon.h"
#include "dlrQuadgon.h"
#include "Utilities.h"

dlrQuadgon::dlrQuadgon()
   : dlrPolygon()
{
   Reset();
}

dlrQuadgon::dlrQuadgon( 
   dlrQuadgon& tgCopy )
   : dlrPolygon( tgCopy )
{
   m_aptCorners[ 0 ] = tgCopy.m_aptCorners[ 0 ];
   m_aptCorners[ 1 ] = tgCopy.m_aptCorners[ 1 ];
   m_aptCorners[ 2 ] = tgCopy.m_aptCorners[ 2 ];
   m_aptCorners[ 3 ] = tgCopy.m_aptCorners[ 3 ];
}

dlrQuadgon::dlrQuadgon( 
   dlrPoint aptCorners[ 4 ] )
   : dlrPolygon()
{
   m_aptCorners[ 0 ] = aptCorners[ 0 ];
   m_aptCorners[ 1 ] = aptCorners[ 1 ];
   m_aptCorners[ 2 ] = aptCorners[ 2 ];
   m_aptCorners[ 3 ] = aptCorners[ 3 ];
}

bool dlrQuadgon::SetCorner(
   int nIndex, 
   dlrPoint ptCorner )
{
   if ( nIndex > 3 )
   {
      return false;
   }
   else
   {
      m_aptCorners[ nIndex ] = ptCorner;
      
      return true;
   }
}

bool dlrQuadgon::FindNormal()
{
   if ( !m_bNormal )
   {
      // create two co-planar vectors using two sides of the polygon:
      dlrVector vcSideOne;
      dlrVector vcSideTwo;
      vcSideOne.Create( m_aptCorners[ 0 ], m_aptCorners[ 1 ] );
      vcSideTwo.Create( m_aptCorners[ 0 ], m_aptCorners[ 2 ] );

      // calculate the cross product between the vectors:
      m_vcNormal = dlrCrossProduct( vcSideOne, vcSideTwo, m_vcNormal );

      // normalize the resulting vector:
      m_bNormal = m_vcNormal.Normalize();
   }

   return m_bNormal;
}