/*
 * File:   dht.c
 * Author: 20184318
 *
 * Created on 21 de Março de 2022, 11:05
 */

#include <xc.h>
#include "dht.h"
#include "delay.h"
#define SENSORENTRADA PORTCbits.RC0







void  dht_read ( DHT_t * ptr )
{
    ptr->dht.temperatu = 21;
    ptr->dht.umida = 50;
}

//char dht_tempe( void )
//{
//    return( sensor.dht.temperatu );
//}
//char dht_tempfra( void )
//{
//    return( sensor.dht.tempefra );
//}
//char dht_umi( void )
//{
//    return( sensor.dht.umida );
//}
//char dht_umifra( void )
//{
//    return( sensor.dht.umidafra );
//}