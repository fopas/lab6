// Copyright 2022 Your Name <your_email>

#ifndef LAB_06_MULTITHREADS_MAKEJSON_H
#define LAB_06_MULTITHREADS_MAKEJSON_H

#include <iomanip>
#include <string>
#include <mutex>
#include <nlohmann/json.hpp>

//Создаём файл с данными в виде json-массива

using json = nlohmann::json;

class Load_json {
 public:
  void make_item(const std::string& str, const std::string& hash,
                 std::time_t timestamp);
  friend std::ostream& operator<<(std::ostream& out, const Load_json& j);

 private:
  mutable std::mutex mut;
  json arr; // массив из json-овских объектов
};


#endif  // LAB_06_MULTITHREADS_MAKEJSON_H
