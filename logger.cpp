#include <iostream>
#include <string>
#include <ctime>

#include "logger.h"
#include "stringutils.h"

namespace cd {

logger::logger(std::string name) : name_(name) {};

std::string logger::timestamp() {
  std::time_t t = std::time(nullptr);
  std::tm* now = std::localtime(&t);
  return cd::stringutils::string_format("%d/%d/%d %d:%d:%d %s",
                       now->tm_mon + 1,
                       now->tm_mday,
                       now->tm_year + 1900,
                       
                     ((now->tm_hour % 12 == 0) ? 12 : now->tm_hour % 12),
                       now->tm_min,
                       now->tm_sec,

                       ((now->tm_hour / 12 < 1) ? "AM" : "PM")
                       );
}

std::string logger::construct() {
  return timestamp() + " " + name_ + ": ";
}

}
