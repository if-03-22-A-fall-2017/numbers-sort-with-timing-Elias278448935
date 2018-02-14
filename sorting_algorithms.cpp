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

int* init_random(int* arry, int len)
{
  for (int i = 0; i < len; i++)
  {
    array[i] = rand() % len;
  }
  return array;
}

void bubble_sort(int* array, int number)
{
  bool is_sorted = false;

  int index = number - 1;

    while (is_sorted == false)
    {
     is_sorted = true;
    for (int i = 0; i < index; i++)
    {
      if (array[i] > array[i + 1])
      {
      int swap = array[i];
      array[i] = array[i + 1];
      array[i + 1] = swap;
      is_sorted = false;
    }
   }
   index--;

  }
}
void insertion_sort(int* array, int number)
{
  int j,i;
  for (j = 1; j < number; j++)
  {
    int key = array[j];
    i = j - 1;
    while (i >= 0 && array[i] > key)
    {
      array[i + 1] = array[i];
      i--;
    }
  array[i + 1] = key;
  }
}
