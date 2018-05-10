int array[10];
int x = 1;

int main ( void ) 
{
    for ( x=1; x <= 10; x++ )
        array [x - 1] = 99;                 //array [x] = 99;

    return 0;
}