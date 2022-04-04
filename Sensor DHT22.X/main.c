#include "config.h"
#include <xc.h>
#include "delay.h"
#include "lcd.h"
#include "teclado.h"
#include "editnum.h"
#include "dht.h"

DHT_t sensor;

void main( void )
{
    const char string[] ="Tecla:       ";
    int num = 0;
    char tecla = 0;
    
    lcd_init();
    teclado_init();
       
    while( 1 )
    {   
        //{21,0,50,71};
        tecla = teclado();
        lcd_print(0,0, string );
        edit( &num, tecla, '*', '-', 0, 20000  ); 

        lcd_num(0, 7, num, 5);
        dht_read( &sensor );
        
        lcd_num(0,13, sensor.dht.temperatu, 3 );
        lcd_num(1,13, sensor.dht.umida, 3 );
        
        
        unsigned char fases;
        
        switch(fases)
        {
            case 0:
                if (num ==3)
                {  
                    
                    lcd_print(1,9, "test" );  
                }
                fases=10;
            break;
            
            case 1:
                if(num ==237)
                {
                    lcd_print(1,0,"senha correta ");
                    num = 0;
                }
                fases=0;
            break;
            
            case 10:
            {
                delay(1000);
            }
            fases=1;
            break; 
            
        }             
           
    }        
}
