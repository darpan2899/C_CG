#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy,ch;
   int radius = 100;
    int stangle = 240, endangle = 300;


   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:\\TC\\BGI");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());
   printf("enter you choice\n 1 for smile \n 0 for frown");
   scanf("%d",&ch);
   clrscr();
   if(ch==1)
   {
    circle(midx, midy, radius);
   circle(midx-30, midy-30, radius-90);
   circle(midx+30, midy-30, radius-90);
   arc(midx, midy-30, stangle, endangle, radius);

   }
   else
   {
    circle(midx, midy, radius);
   circle(midx-30, midy-30, radius-90);
   circle(midx+30, midy-30, radius-90);
   arc(midx, midy+120,60 , 120, radius);

   }

   /* clean up */
   getch();
   closegraph();
   return 0;
}
