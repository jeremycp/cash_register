#include <stdio.h>
#include <math.h>

void change(double input){
   //round to prevent bit loss from double -> int
   int adjIn = (int)(input < 0 ? input - 0.01 : input + 0.01);
   int watch = adjIn;
   //printf("%d\n\n", adjIn);

   //int five, one, quarter, dime, nickel, penny;
   int trackFive = 0;
   int trackOne = 0;
   int trackQuarter = 0;
   int trackDime = 0;
   int trackNickel = 0;
   int trackPenny = 0;
   int trackTen = 0;
   int trackTwenty = 0;
   int trackFifty = 0;
   int trackHundred = 0;

   while(watch >= 0){

      //printf("Nights Watch: %d\n\n", watch);
	  if(watch >= 10000){
	   	trackHundred++;
	 	watch -= 10000;
	  }
	  if(watch >= 5000 && watch < 10000){
		trackFifty++;
		watch -= 5000;
	  }
	  if(watch >= 2000 && watch < 5000){
	   	trackTwenty++;
	   	watch -= 2000;
	  }
	  if(watch >= 1000 && watch < 2000){
		trackTen++;
		watch -= 1000;
	  }
      if(watch >= 500 && watch < 1000){
         //printf("Five active\n");
         trackFive++;
         //five = adjIn % 500;
         //adjIn = five;
         watch -= 500;
        // printf("WATCH: %d\n", watch);
      }
      else if(watch >= 100 && watch < 500){
         //printf("One active\n");
         trackOne++;
        // one = adjIn % 100;
        // adjIn = one;
         watch -= 100;
        // printf("WATCH: %d\n", watch);
      }
      else if(watch >= 25 && watch < 100){
         //printf("Qrt active\n");
         trackQuarter++;
         //quarter = adjIn % 25;
         //adjIn = quarter;
         watch -= 25;
        // printf("WATCH: %d\n", watch);
      }
      else if(watch >= 10 && watch < 25){
        // printf("Dime active\n");
         trackDime++;
         //dime = adjIn % 10;
        // adjIn = dime;
         watch -= 10;
        // printf("WATCH: %d\n", watch);
      }
      else if(watch >= 5 && watch < 10){
        // printf("Nic active\n");
         trackNickel++;
        // nickel = adjIn % 5;
        // adjIn = nickel;
         watch -= 5;
         //printf("WATCH: %d\n", watch);
      }
      else if(watch >= 1 && watch < 5){
         //printf("Penny active\n");
         trackPenny++;
         //penny = adjIn - 1;
        // adjIn = penny;
         watch -= 1;
        // printf("WATCH: %d\n", watch);
      }
      else if(watch <= 0){
       break;
      }
   }

   //printf("\n");
   printf("Hundreds: %d\n", trackHundred);
   printf("Fifties: %d\n", trackFifty);
   printf("Twenties: %d\n", trackTwenty);
   printf("Tens: %d\n", trackTen);
   printf("Fives: %d\n", trackFive);
   printf("Ones: %d\n", trackOne);
   printf("Quarters: %d\n", trackQuarter);
   printf("Dimes: %d\n", trackDime);
   printf("Nickels: %d\n", trackNickel);
   printf("Pennies: %d", trackPenny);

   return;
}


void main(){
   double input;

   scanf("%lf", &input);
   input = input * 100;
   //printf("%lf\n\n", input);

   change(input);

   return;
}
