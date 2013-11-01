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
#include "Utilities.h"

void dlrPolygon::Reset()
{
   m_bNormal = false;
   m_vcNormal.Reset();
}

dlrPolygon::dlrPolygon()
{
   Reset();
}

dlrPolygon::dlrPolygon(
   dlrPolygon& pgCopy )
{
   m_vcNormal = pgCopy.m_vcNormal;
   m_bNormal = pgCopy.m_bNormal;
   m_crColor = pgCopy.m_crColor;
}
