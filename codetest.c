#include <string.h>
#include <stdio.h>

int main()
{
  int rc = 0;
  int stringify = 0x80000000;
  char buf[sizeof("256")];
  rc = snprintf(buf, sizeof(buf), "%u", stringify >> 24);
  if (rc == -1 || rc >= sizeof(buf)) {
      /* Handle error */
    }
  return 0;
}
