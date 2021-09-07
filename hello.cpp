#include <stdio.h>
#include <unistd.h>

int main () {

  char hostname[64];
  gethostname(hostname, sizeof(hostname));
  printf("The Hostname is: %s:", hostname);
  return 0;
}
