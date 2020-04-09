#include "performance.hpp"

Performance::Performance() {}

Performance::~Performance() {}

void Performance::fixStartTime()
{
  this->time_.first = this->fixTime();
}

void Performance::fixEndTime()
{
  this->time_.second = this->fixTime();
}

time_t Performance::getExecutionTime()
{
  if(this->time_.first != 0 && this->time_.second != 0)
  {
    return this->time_.second - this->time_.first;
  }
  else
  {
    return -1;
  }
}

void Performance::displayExecutionTime()
{
  time_t executionTime = this->getExecutionTime();

  if(executionTime != -1)
  {
    std::cout << executionTime << "\tsec\n";
  }
  else
  {
    std::cout << "Failed to determine runtime: "
      "both the start and end times must be recorded.\n";
  }
}

time_t Performance::fixTime()
{
  gettimeofday(&(this->tv_), NULL);
  return this->tv_.tv_sec;
}

