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

void dlrVector::Reset()
{
   m_bLength = false;
   m_bNormal = false;
   m_dLength = 0;
}

dlrVector::dlrVector() 
   : dlrPoint()
{
   Reset();
}

dlrVector::dlrVector( 
   dlrPoint& ptCopy )
   : dlrPoint(
      ptCopy )
{
   Reset();
}

dlrVector::dlrVector( 
   dlrVector& vcCopy )
   : dlrPoint( 
      vcCopy.m_dX, 
      vcCopy.m_dY, 
      vcCopy.m_dZ )
{
   m_bLength = vcCopy.m_bLength;
   m_bNormal = vcCopy.m_bNormal;
   m_dLength = vcCopy.m_dLength;
}

dlrVector::dlrVector( 
   double dX,
   double dY,
   double dZ )
   : dlrPoint( 
      dX, 
      dY, 
      dZ )
{
   Reset();
}

double dlrVector::Length()
{
   if ( !m_bLength )
   {
      m_dLength = 
         sqrt( ( m_dX * m_dX ) + ( m_dY * m_dY ) + ( m_dZ * m_dZ ) );

      m_bLength = true;
   }

   return m_dLength;
} 

bool dlrVector::Normalize()
{
   if ( !m_bNormal )
   {
      Length();

      m_dLength = ( m_dLength == 0 ) ? 1 : m_dLength;

      m_dX /= m_dLength;
      m_dY /= m_dLength;
      m_dZ /= m_dLength;

      m_dLength = 1;
      
      m_bNormal = true;
   }

   return m_bNormal;
}

void dlrVector::Create(
   dlrPoint ptStart, 
   dlrPoint ptEnd )
{
   m_dX = ptEnd.m_dX - ptStart.m_dX;
   m_dY = ptEnd.m_dY - ptStart.m_dY;
   m_dZ = ptEnd.m_dZ - ptStart.m_dZ;

   Reset();
} 

bool dlrVector::CreateNormal(
   dlrPoint ptStart, 
   dlrPoint ptEnd )
{
   Create(
      ptStart,
      ptEnd );   
   
   return Normalize();
} 

const dlrVector& dlrVector::operator = ( const dlrVector& vcSrc )
{
   dlrPoint::operator = ( vcSrc );

   m_bLength = vcSrc.m_bLength;
   m_bNormal = vcSrc.m_bNormal;
   m_dLength = vcSrc.m_dLength;
   
   return (*this);
}
