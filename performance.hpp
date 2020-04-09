#include <iostream>
#include <sys/time.h>
#include <unistd.h>

class Performance
{
  public:

    Performance();

    ~Performance();

    void fixStartTime();

    void fixEndTime();

    time_t getExecutionTime();

    void displayExecutionTime();

    time_t fixTime();

  private:

    struct timeval tv_;

    std::pair<time_t, time_t> time_ {0, 0};
};

