int get_1_or_2( void )
{
  answer = 0;   // 
  while (answer < 1 || answer > 2)
  {
    printf("Enter 1 for Yes, 2 for No");   // Enter 1 for Yes, 2 for No
    scanf( "%f", answer);
  }
  return answer;
}
