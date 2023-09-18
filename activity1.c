#include<stdio.h>
#include "omp.h"
int main()
{
{
int ID = omp_get_thread_num();
printf("Procesadores(%d)", ID);
printf("Multiples(%d)", ID);
printf("en accion(%d)", ID);
}
}
