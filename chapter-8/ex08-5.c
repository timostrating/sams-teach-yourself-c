int x, y;
int array[10][3];
int main( void ) 
{
    for ( x = 0; x < 10; x++ )           // for ( x = 0; x < 3; x++ )
        for ( y = 0; y < 3; y++ )        // for ( y = 0; y < 10; y++ )
            array[x][y] = 0;
    return 0;
}