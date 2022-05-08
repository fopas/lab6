// Copyright 2022 Your Name <your_email>

#ifndef LAB_06_MULTITHREADS_LOGGING_H
#define LAB_06_MULTITHREADS_LOGGING_H

#include <iostream>
#include <boost/log/exceptions.hpp>
#include <boost/log/sinks.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/utility/setup.hpp>

namespace logs = boost::log;
namespace keywords = boost::log::keywords;

void set_logs();

#endif  // LAB_06_MULTITHREADS_LOGGING_H
