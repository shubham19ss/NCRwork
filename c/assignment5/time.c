#include <stdio.h>
#include <time.h>
int main ()
{
  time_t r_time;
  struct tm * tm_reference;

  time ( &r_time);
  tm_reference = localtime ( &r_time );
  printf ( "Current time of the day is %d Hrs:%d Min:%d Sec", tm_reference->tm_hour, tm_reference->tm_min, tm_reference->tm_sec );

  return 0;
}
