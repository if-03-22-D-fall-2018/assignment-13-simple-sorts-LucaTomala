/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "sorting_algorithms.h"
#include <stdlib.h>
#include <time.h>
void init_random(int *array, unsigned long length)
{
	srandom(time(NULL));
	for (unsigned long i = 0; i < length; i++)
		array[i] = random();
}
void bubble_sort(int array[], int length)
{

}
void insertion_sort(int array[], int length)
{
  for (int i = 0; i < length; i++)
  {
    int key = array[1];
    int j = i-1;
    while (j>= 0 && array[j]>i)
    {
      array[j+1] = array[j];
      j--;
    }
    array[i+j] = key;
  }
}
