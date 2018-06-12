#include <iostream>
#include <stdio.h>

using namespace std;

static const int N = 10;

int main()
{
  int i, p, q, id[N];

  for (i = 0; i < N; i++) {
      id[i] = i;
  }

  printf("[");
  for (i = 0; i < N; i++) {
      printf("%d ", id[i]);
  }
  printf("]\n");


  while (cin >> p >> q)
  {
      int groupP = id[p];
      int groupQ = id[q];
      if (groupP == groupQ) {
          printf("Такая связь уже есть, потому что id[%d] = id[%d] = %d!\n", p, q, groupP);
          continue;
      }
      for (i = 0; i < N; i++)
      {
          if (id[i] == groupP)
          {

//               printf("Перемещаем %d из группы %d в группу %d\n", i, groupP, groupQ);
              id[i] = groupQ;
          }
          else
          {
//               printf("Число %d никуда не перемещаем (оставляем в группе %d)\n", i, id[i]);
          }
      }
      printf("Связь добавлена! %d - %d. Все %d превратились в %d\n", p, q, groupP, groupQ);
      printf("[");
      for (i = 0; i < N; i++) {
          printf("%d ", id[i]);
      }
      printf("]\n");
  }
   return 0;
}

