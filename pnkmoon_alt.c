#include <stdio.h>
#include <stdlib.h>
#include <pink_moon.h>

void print_full_table( int [], int [], int [], char **, int n );

int main()
{
	print_full_table( year_markers, day_markers, time_markers, day_of_week_markers, 4 );
	return EXIT_SUCCESS;
}


void print_full_table( int year[], int day[], int time[], char **dow, int n )
{
	int i;

	for ( i = 0; i < n; i++ ) {
		int hh = time[ i ] / 100;
		int mm = time[ i ] - hh * 100;
		printf( "%2d.  %s, April %2d, %d at %2.2d:%2.2d.\n", i+1, dow[ i ], day[ i ], year[ i ], hh, mm );
	}

	return;
}
