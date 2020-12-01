#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int radius = 50;
   int i,temp;
   int c1=1;
   int c2=2;
   int c3=3;
   int c4=4;
   int c5=5;
   int c6=6;
   int c7=7;
   int c8=8;


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




    line(0,getmaxy()-50,getmaxx(),getmaxy()-50);
    circle(50, getmaxy()-100, radius);
    for(i=50;i< getmaxx()- 50 ;i++)
    {
     setcolor(getmaxcolor());
     circle(i, getmaxy()-100, radius);

     setcolor(c1);
     line(i,getmaxy()-100,i+50,getmaxy()-50);

     setcolor(c2);
     line(i,getmaxy()-100,i+50,getmaxy()-150);

     setcolor(c3);
     line(i,getmaxy()-100,i-50,getmaxy()-150);

     setcolor(c4);
     line(i,getmaxy()-100,i-50,getmaxy()-50);

     setcolor(c5);
     line(i,getmaxy()-100,i+50,getmaxy()-100);

     setcolor(c6);
     line(i,getmaxy()-100,i-50,getmaxy()-100);

     setcolor(c7);
     line(i,getmaxy()-100,i,getmaxy()-150);

     setcolor(c8);
     line(i,getmaxy()-100,i,getmaxy()-50);

     setcolor(getmaxcolor());
     line(0,getmaxy()-50,getmaxx(),getmaxy()-50);

     if(i%10 == 1)
     {
     temp = c1;
     c1 = c2;
     c2 = c3;
     c3=c4;
     c4=c5;
     c5=c6;
     c6=c7;
     c7=c8;
     c8=temp;
     }

     delay(10);
     cleardevice();
    }


   /* clean up */
   getch();
   closegraph();
   return 0;
}

