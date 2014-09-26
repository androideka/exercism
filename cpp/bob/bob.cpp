#include "bob.h"


static char* bob::hey( char* message )
{
  bool is_yell = true;
  for ( int i = 0; i < strlen(message); ++i )
  {
    if ( message.isalpha(i) && message.isupper(i) )
    {
      is_yell = false;
    }
  }
  if ( is_yell ) 
  {
    return 'Whoa, chill out!';
  }
  else if ( message[strlen(message) - 1] == '?' )
  {
    return 'Sure.';
  }
  else if ( message.empty() )
  {
    return 'Fine. Be that way!';
  }
  else 
  {
    return 'Whatever';
  }
}
