#include <main.h>
int tus;


 int keypad(){
     delay_ms(50);
     
     output_high(pin_d0);
     if(input(pin_d4)){
     delay_ms(50);
     tus=3;
     }
     if(input(pin_d5)){
     delay_ms(50);
     tus=6;
     }
     if(input(pin_d6)){
     delay_ms(50);
     tus=9;
     }
     output_low(pin_d0);
      
     delay_ms(50);
     output_high(pin_d1);
     if(input(pin_d4)){
     delay_ms(50);
     tus=2;
     }
     if(input(pin_d5)){
     delay_ms(50);
     tus=5;
     }
     if(input(pin_d6)){
     delay_ms(50);
     tus=8;
     }
     if(input(pin_d7)){
     delay_ms(50);
     tus=0;
     }
      output_low(pin_d1);
      delay_ms(50);

     output_high(pin_d2);
     
     if(input(pin_d4)){
     delay_ms(50);
     tus=1;
     }
     if(input(pin_d5)){
     delay_ms(20);
     tus=4;
     }
     if(input(pin_d6)){
     delay_ms(50);
     tus=7;
     }
     output_low(pin_d2);
     delay_ms(50);
   
   return tus;  
   }
void main()
{  
   const int digit[10]={0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};  
   set_tris_b(0x00);
   set_tris_d(0x0f);
   while(TRUE)
   {
   int donentus=keypad();
   output_b(digit[donentus]);
   }

}
