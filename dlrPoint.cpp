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

dlrPoint::dlrPoint()
{
   m_dX = 0;
   m_dY = 0;
   m_dZ = 0;
}

dlrPoint::dlrPoint( 
   dlrPoint& ptCopy )
{
   m_dX = ptCopy.m_dX;
   m_dY = ptCopy.m_dY;
   m_dZ = ptCopy.m_dZ;
}

dlrPoint::dlrPoint( 
   double dX,
   double dY,
   double dZ )
{
   m_dX = dX;
   m_dY = dY;
   m_dZ = dZ;
}

const dlrPoint& dlrPoint::operator = ( const dlrPoint& ptSrc )
{
   m_dX = ptSrc.m_dX;
   m_dY = ptSrc.m_dY;
   m_dZ = ptSrc.m_dZ;

   return (*this);
}
