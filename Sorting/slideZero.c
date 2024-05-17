#include <stdio.h>
void main()
{
  int arr[9] = {5, 0, 2, 0, 0, 4, 1, 3, 0};
  int answer[9];
  int index = 0;
  for (int i = 0; i < 9; i++)
  {
    if (arr[i] != 0)
    {
      answer[index] = arr[i];
      index++;
    }
  }
  for (int i = index; i < 9; i++)
  {
    answer[i] = 0;
  }
  for (int i = 0; i < 9; i++)
  {
    printf("%d ",answer[i]);

  }
}