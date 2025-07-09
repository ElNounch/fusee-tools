#include <stdint.h>

struct two_uint64_t { uint64_t quot; uint64_t rem;};

struct two_uint64_t __aeabi_uldivmod(uint64_t numerator, uint64_t denominator) {
   uint64_t quotV = numerator / denominator;
   uint64_t remV = numerator - denominator * quotV;
   return ((struct two_uint64_t) {quotV, remV});
}
