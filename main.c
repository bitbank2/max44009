//
// MAX44009 sample app
//
// Copyright (c) 2017 Larry Bank
// email: bitbank@pobox.com
// Project started 11/30/2017
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

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>
#include <max44009.h>

int main(int argc, char *argv[])
{
int i;
float fLux;

	i = max44009Init(0, 0x4a);
	if (i != 0)
	{
		return -1; // problem - quit
	}

	printf("MAX44009 device successfully opened.\n");
	usleep(1000000); // wait for data to settle for first read

	for (i=0; i<30; i++) // read values once a second for 30 seconds
	{
		fLux = max44009ReadValue();
		printf("Light level = %f lux\n", fLux);
		usleep(1000000);
	}

return 0;
} /* main() */
