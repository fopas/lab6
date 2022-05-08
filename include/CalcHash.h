// Copyright 2022 Your Name <your_email>

#ifndef LAB_06_MULTITHREADS_CALCHASH_H
#define LAB_06_MULTITHREADS_CALCHASH_H

#include <iomanip>
#include <string>
#include <thread>
#include <mutex>
#include <atomic>
#include <csignal>
#include <nlohmann/json.hpp>
#include <picosha2.h>
#include "Logging.h"
#include "MakeJson.h"

using nlohmann::json;

//Ctri+C
void stop(int flag);

void calculation(Load_json& j);
void start(const int& argc, char **argv);

#endif  // LAB_06_MULTITHREADS_CALCHASH_H
