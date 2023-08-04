#pragma once

#include <string>

namespace b64 {
std::string base64_naive_decode(const std::string& s);
std::string base64_naive_encode(const std::string& s);
}  // namespace b64