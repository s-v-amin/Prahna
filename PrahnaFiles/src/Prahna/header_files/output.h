#pragma once

#include "unistd.h"
#include <string>

namespace output {
    void init(const std::string& message);
    void print(const std::string& message);
}