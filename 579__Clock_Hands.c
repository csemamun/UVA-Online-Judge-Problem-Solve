#include<stdio.h>
#include<math.h>

int main()
    {
         double min,hour,angl,hourangle,minuteangle;
          while(scanf("%lf:%lf",&hour,&min)==2)
          {
              if((hour==0)&&(min==0))
              break;
             hourangle=(hour*60+min)*0.5;
             minuteangle=min*6;
             angl=(hourangle-minuteangle);
              if(angl<0)
               angl=angl*(-1);

              if (angl>180)
              angl=360-angl;

              printf("%.3lf\n",angl);
          }
          return 0;
    }
