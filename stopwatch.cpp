/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			stopwatch.cpp
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "stopwatch.h"
#include <stdlib.h>
float startedTime;
float stopedTime;
void start_stopwatch()
{
  startedTime = clock();
}
void stop_stopwatch()
{
  stopedTime = clock();
}
float elapsed_time()
{
  if(stopedTime < startedTime)
  {
    return (clock() - startedTime) / CLOCKS_PER_SEC;
  }
  return (stopedTime - startedTime) / CLOCKS_PER_SEC;
}
