/* transform dynaptune table into footprint */

#include <string.h>
#include <stdio.h>
#include <math.h>
#include <sys/types.h>

int main()
{
  char myversion[] = "foot.1.0";
  char string[1000];
  double x[1000], y[1000], qx[1000], qy[1000], s;
  int i, j, k, n = 0, m;
  printf("# footprint plot creation %s\n", myversion);
  while (fgets(string, 1000, stdin) != NULL)
    {
     if (*string == ' ')
       {
	sscanf(string,"%le %le %le %le %le", &x[n], &y[n], &qx[n], &qy[n], &s);
        if (qx[n] > 0.5)  qx[n] = 1 - qx[n];
        if (qy[n] > 0.5)  qy[n] = 1 - qy[n];
        n++;
       }
    }
  if (n > 1)
    {
     s = x[1] * x[1] + y[1] * y[1];
     for (j = 2; j < n; j++)
       {
	if (fabs(s - (x[j]*x[j]+y[j]*y[j]))/s > 1.1) break;
       }
     j--;
     m = n / j;
     printf("# number of values read                  : %d\n", n);
     printf("# number of points at constant amplitude : %d\n", j);
     printf("# number of amplitudes                   : %d\n", m);
     for (i = 0; i < j; i++)
       {
        printf("%e %e\n", qx[0], qy[0]);
        for (k = 0; k < m; k++)
	  {
           printf("%e %e\n", qx[j*k+i+1], qy[j*k+i+1]);
	  }
        for (k = m-1; k >=0; k--)
	  {
           printf("%e %e\n", qx[j*k+i+1], qy[j*k+i+1]);
	  }
       }
     for (k = 0; k < m; k++)
       {
	if (k%2 == 0)
	  {
           for (i = 0; i < j; i++)
	     {
	      printf("%e %e\n", qx[j*k+i+1], qy[j*k+i+1]);
	     }
	  }
        else
	  {
           for (i = j-1; i >=0; i--)
	     {
	      printf("%e %e\n", qx[j*k+i+1], qy[j*k+i+1]);
	     }
	  }
      }
    }
  return 0;
}




