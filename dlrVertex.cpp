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
#include "dlrVertex.h"
#include "Utilities.h"

void dlrVertex::Reset()
{
   m_bNormal = false;
   m_vcNormal.Reset();
}

dlrVertex::dlrVertex() 
{
   Reset();
}

dlrVertex::dlrVertex( 
   dlrPoint& ptCoordinates )
   : m_ptCoordinates( ptCoordinates )
{
   Reset();
}

dlrVertex::dlrVertex( 
   dlrVertex& vxCopy )
   : m_ptCoordinates( vxCopy.m_ptCoordinates )
   , m_vcNormal( vxCopy.m_vcNormal )
{
   m_bNormal = vxCopy.m_bNormal;
}

dlrVertex::dlrVertex( 
   dlrPoint& ptCoordinates,
   dlrVector& vcNormal )
   : m_ptCoordinates ( ptCoordinates )
   , m_vcNormal( vcNormal )
{
   m_bNormal = true;
}

dlrVertex::dlrVertex( 
   double dX,
   double dY,
   double dZ )
   : m_ptCoordinates( 
      dX, 
      dY, 
      dZ )
{
   Reset();
}
