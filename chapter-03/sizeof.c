#include <stdio.h>

int main(void) 
{
    printf( "\nA char                   is %d bytes", sizeof( char ));
    printf( "\nA int                    is %d bytes", sizeof( int ));
    printf( "\nA short                  is %d bytes", sizeof( short ));
    printf( "\nA long                   is %d bytes", sizeof( long ));
    printf( "\nA long long              is %d bytes", sizeof( long long ));
printf("\n");
    printf( "\nA unsigned char          is %d bytes", sizeof( unsigned char ));
    printf( "\nA unsigned int           is %d bytes", sizeof( unsigned int ));
    printf( "\nA unsigned short         is %d bytes", sizeof( unsigned short ));
    printf( "\nA unsigned long          is %d bytes", sizeof( unsigned long ));
    printf( "\nA unsigned long long     is %d bytes", sizeof( unsigned long long ));
printf("\n");    
    printf( "\nA float                  is %d bytes", sizeof( float ));
    printf( "\nA double                 is %d bytes", sizeof( double ));
    printf( "\nA long double            is %d bytes", sizeof( long double ));
}