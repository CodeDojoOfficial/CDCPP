#ifndef CDCPP_UTIL_LOGGER_H_INCLUDED
#define CDCPP_UTIL_LOGGER_H_INCLUDED

#include <iostream>
#include <string>
#include <ctime>
#include <sys/types.h>

namespace cd {

class logger {
public:
  logger(std::string name);

  void log(const char* t) { std::clog << construct() << t << std::endl; }
  void log(int8_t t) { std::clog << construct() << t << std::endl; }
  void log(int16_t t) { std::clog << construct() << t << std::endl; }
  void log(int t) { std::clog << construct() << t << std::endl; }
  void log(int64_t t) { std::clog << construct() << t << std::endl; }
  void log(float t) { std::clog << construct() << t << std::endl; }
  void log(double t) { std::clog << construct() << t << std::endl; }
  void log(bool t) { std::clog << construct() << t << std::endl; }
  void log(char t) { std::clog << construct() << t << std::endl; }

  void warn(const char* t) { std::clog << "\033[93;1m" << construct() << "\033[0m" << t << std::endl; }
  void warn(int8_t t) { std::clog << "\033[93;1m" << construct() << "\033[0m" << t << std::endl; }
  void warn(int16_t t) { std::clog << "\033[93;1m" << construct() << "\033[0m" << t << std::endl; }
  void warn(int t) { std::clog << "\033[93;1m" << construct() << "\033[0m" << t << std::endl; }
  void warn(int64_t t) { std::clog << "\033[93;1m" << construct() << "\033[0m" << t << std::endl; }
  void warn(float t) { std::clog << "\033[93;1m" << construct() << "\033[0m" << t << std::endl; }
  void warn(double t) { std::clog << "\033[93;1m" << construct() << "\033[0m" << t << std::endl; }
  void warn(bool t) { std::clog << "\033[93;1m" << construct() << "\033[0m" << t << std::endl; }
  void warn(char t) { std::clog << "\033[93;1m" << construct() << "\033[0m" << t << std::endl; }

  void error(const char* t) { std::clog << "\033[91;1m" << construct() << "\033[0m" << t << std::endl; }
  void error(int8_t t) { std::clog << "\033[91;1m" << construct() << "\033[0m" << t << std::endl; }
  void error(int16_t t) { std::clog << "\033[91;1m" << construct() << "\033[0m" << t << std::endl; }
  void error(int t) { std::clog << "\033[91;1m" << construct() << "\033[0m" << t << std::endl; }
  void error(int64_t t) { std::clog << "\033[91;1m" << construct() << "\033[0m" << t << std::endl; }
  void error(float t) { std::clog << "\033[91;1m" << construct() << "\033[0m" << t << std::endl; }
  void error(double t) { std::clog << "\033[91;1m" << construct() << "\033[0m" << t << std::endl; }
  void error(bool t) { std::clog << "\033[91;1m" << construct() << "\033[0m" << t << std::endl; }
  void error(char t) { std::clog << "\033[91;1m" << construct() << "\033[0m" << t << std::endl; }
private:
  std::string timestamp();
  std::string construct();

  const std::string name_;
};

}

#endif // logger.h inclusion check
