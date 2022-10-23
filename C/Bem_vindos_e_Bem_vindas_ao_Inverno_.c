#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d1, d2, d3;

    scanf("%d %d %d", &d1, &d2, &d3);

        if (d1 > d2 && d2 <= d3) printf(":)\n");                                                // desceu
        else if (d1 < d2 && d2 >= d3) printf(":(\n");                                           // sud2iu
        else if (d1 < d2 && d2 < d3 && ((d2 - d1) > (d3 - d2))) printf(":(\n");                 // sud2iu 
        else if (d1 < d2 && d2 < d3 && ((d2 - d1) <= (d3 - d2))) printf(":)\n"); //no minimo    // sud2iu
        else if (d1 > d2 && d2 > d3 && ((d2 - d3) < (d1 - d2))) printf(":)\n");                 // desd3eu
        else if (d1 > d2 && d2 > d3 && ((d2 - d3) >= (d1 - d2))) printf(":(\n"); //no minimo    //desd3eu
        else if (d1 == d2){
            if (d2 < d3) printf(":)\n");
            else printf(":(\n");
        }
return 0;
}