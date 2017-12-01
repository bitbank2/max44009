#ifndef __MAX44009__
#define __MAX44009__

//
// MAX44009 Ambient light sensor
//
// Written by Larry Bank - 11/30/2017
// Copyright (c) 2017 BitBank Software, Inc.
// bitbank@pobox.com
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

//
// Open the I2C bus and set the device into continuous sampling mode
// returns 0 for success, 1 for failure
//
int max44009Init(int iChannel, int iAddr);
//
// Read the current ambient light value in Lux
//
float max44009ReadValue(void);

#endif // __MAX44009__
