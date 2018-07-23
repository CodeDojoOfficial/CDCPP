# Bazel build instruction file

cc_library(
  name = "CDCPP",
  
  hdrs = [ # Files not included: stringutils.h
    "logger.h"
  ],

  srcs = [
    "logger.cpp"
  ],

  deps = [] # No dependecies, but other projects will require "//CDCPP/src:CDCPP" to add CDCPP if using Bazel.
)
