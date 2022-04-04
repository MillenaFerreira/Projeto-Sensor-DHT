/* 
 * File:   dht.h
 * Author: 20184318
 *
 * Created on 21 de Março de 2022, 11:24
 */

#ifndef DHT_H
#define	DHT_H

typedef union
{
    struct
    {
        unsigned char umidafra;
        unsigned char umida;
        unsigned char tempefra;
        unsigned char temperatu;
    } dht;
    unsigned long bits;
} DHT_t;


void dht_init( void );

void  dht_read ( DHT_t * ptr );

//char dht_tempe( void );
//
//char dht_tempfra( void );
//
//char dht_umi( void );
//
//char dht_umifra( void );
//
//void forcedht( void );

#endif	/* DHT_H */

