#include<stdio.h>
#include<stdlib.h>

void
main ()
{
  int d, m, y, nd, nm, ny;
  printf ("Enter date\n");
  scanf ("%d:%d:%d", &d, &m, &y);
  if (d < 1 || d > 31)
    {
      printf ("Invalid day\n");
      exit (0);
    }
  if (m < 1 || m > 12)
    {
      printf ("Invalid month\n");
      exit (0);
    }
  if (y < 1812 || y > 2012)
    {
      printf ("Invalid year\n");
      exit (0);
    }
  if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10)
    {
      if (d < 31)
	{
	  nd = d + 1;
	  nm = m;
	  ny = y;
	}
      else if (d == 31)
	{
	  nd = 1;
	  nm = m + 1;
	  ny = y;
	}
      else
	{
	  printf ("Invalid date\n");
	  exit (0);
	}
    }
  else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
      if (d < 30)
	{
	  nd = d + 1;
	  nm = m;
	  ny = y;
	}
      else if (d == 30)
	{
	  nd = 1;
	  nm = m + 1;
	  ny = y;
	}
      else
	{
	  printf ("Invalid date\n");
	  exit (0);
	}
    }
  else if (m == 12)
    {
      if (d < 31)
	{
	  nd = d + 1;
	  nm = m;
	  ny = y;
	}
      else if (d == 31)
	{
	  if (y >= 2012)
	    {
	      printf ("Invalid year");
	      exit (0);
	    }
	  else
	    {
	      nd = 1;
	      nm = 1;
	      ny = y + 1;
	    }
	}
    }
  else if (m == 2)
    {
      if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
	{
	  if (d <= 28)
	    {
	      nd = d + 1;
	      nm = m;
	      ny = y;
	    }
	  else if (d == 29)
	    {
	      nd = 1;
	      nm = m + 1;
	      ny = y;
	    }
	  else
	    {
	      printf ("Invalid date");
	      exit (0);
	    }
	}
      else
	{
	  if (d < 28)
	    {
	      nd = d + 1;
	      nm = m;
	      ny = y;
	    }
	  else if (d == 28)
	    {
	      nd = 1;
	      nm = m + 1;
	      ny = y;

	    }
	  else
	    {
	      printf ("invalid date\n");
	      exit (0);
	    }
	}
    }
  printf ("%d:%d:%d", nd, nm, ny);
}
