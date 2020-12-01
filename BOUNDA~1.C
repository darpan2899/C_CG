
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<math.h>
#include <dos.h>

void boundary_fill(int x,int y,int fill,int boundary)
{
	int current;

	current=getpixel(x,y);

	if((current!=boundary)&&(current==fill))
	{

		putpixel(x,y,12);

		boundary_fill(x+1,y,fill,boundary);
		boundary_fill(x-1,y,fill,boundary);
		boundary_fill(x,y+1,fill,boundary);
		boundary_fill(x,y-1,fill,boundary);

		delay(10);

	}
}

int main()
{
    int gdriver = DETECT, gmode, errorcode;

     int midx,midy,fill,boundary;
     int r=10;




   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");

   midx= getmaxx()/2;
   midy= getmaxy()/2;


   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   setcolor(15);
   circle(midx,midy,r);

   fill=0;
   boundary=15;

   boundary_fill(midx,midy,0,15);



   getch();
   closegraph();
   return 0;


}
