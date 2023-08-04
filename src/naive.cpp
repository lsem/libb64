#include "b64/naive.h"

#include <b64/decode.h>
#include <b64/encode.h>

namespace b64 {
std::string base64_naive_decode(const std::string& s) {
    std::string res(base64::base64_decode_maxlength(s.size()), 0);
    base64::base64_decodestate state;
    base64::base64_init_decodestate(&state);
    const size_t output_size = base64::base64_decode_block(s.data(), s.size(), res.data(), &state);
    res.resize(output_size);
    return res;
}

std::string base64_naive_encode(const std::string& s) {
    std::string res(s.size() * 2, 0);
    base64::base64_encodestate state;
    base64::base64_init_encodestate(&state);
    const size_t output_size = base64::base64_encode_block(s.data(), s.size(), res.data(), &state);
    res.resize(output_size);
    return res;
}
}  // namespace b64