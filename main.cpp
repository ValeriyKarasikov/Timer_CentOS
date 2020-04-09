#include "performance.hpp"

int main()
{
  class Performance program;

  program.fixStartTime();

  sleep(5);

  program.fixEndTime();

  program.displayExecutionTime();

  return 0;
}
