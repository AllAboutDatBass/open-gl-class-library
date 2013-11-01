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

#pragma once

class dlrPoint;
class dlrVector;

double dlrDotProduct(
   dlrPoint ptOne,
   dlrPoint ptTwo );

dlrVector& dlrCrossProduct(
   dlrPoint ptOne,
   dlrPoint ptTwo,
   dlrVector& vcResult );
   
HRESULT dlrLoadBitmap( 
   LPCTSTR szFile, 
   dlrBinary& binBitmap,
   DWORD& dwWidth,
   DWORD& dwHeight );
   
