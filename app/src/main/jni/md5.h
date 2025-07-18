#ifndef BZF_MD5_H
#define BZF_MD5_H

#include <array>
#include <cstdint>
#include <string>
#include <ostream>

class MD5 {
public:
    MD5() noexcept;
    explicit MD5(const std::string& text);

    void update(const unsigned char* data, size_t length) noexcept;
    void update(const char* data, size_t length) noexcept;
    void finalize() noexcept;

    std::string hexdigest() const;
    std::array<uint8_t, 16> digest() const noexcept;

    friend std::ostream& operator<<(std::ostream& os, const MD5& md5);

private:
    static constexpr size_t BLOCK_SIZE = 64;
    static constexpr size_t DIGEST_SIZE = 16;

    // Round shift amounts
    static constexpr std::array<uint32_t, 64> SHIFTS {
            7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22,
            5,  9, 14, 20, 5,  9, 14, 20, 5,  9, 14, 20, 5,  9, 14, 20,
            4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23,
            6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21
    };

    // Constants for transformation
    static constexpr std::array<uint32_t, 64> CONSTANTS {
            0xd76aa478, 0xe8c7b756, 0x242070db, 0xc1bdceee,
            0xf57c0faf, 0x4787c62a, 0xa8304613, 0xfd469501,
            0x698098d8, 0x8b44f7af, 0xffff5bb1, 0x895cd7be,
            0x6b901122, 0xfd987193, 0xa679438e, 0x49b40821,
            0xf61e2562, 0xc040b340, 0x265e5a51, 0xe9b6c7aa,
            0xd62f105d, 0x02441453, 0xd8a1e681, 0xe7d3fbc8,
            0x21e1cde6, 0xc33707d6, 0xf4d50d87, 0x455a14ed,
            0xa9e3e905, 0xfcefa3f8, 0x676f02d9, 0x8d2a4c8a,
            0xfffa3942, 0x8771f681, 0x6d9d6122, 0xfde5380c,
            0xa4beea44, 0x4bdecfa9, 0xf6bb4b60, 0xbebfbc70,
            0x289b7ec6, 0xeaa127fa, 0xd4ef3085, 0x04881d05,
            0xd9d4d039, 0xe6db99e5, 0x1fa27cf8, 0xc4ac5665,
            0xf4292244, 0x432aff97, 0xab9423a7, 0xfc93a039,
            0x655b59c3, 0x8f0ccc92, 0xffeff47d, 0x85845dd1,
            0x6fa87e4f, 0xfe2ce6e0, 0xa3014314, 0x4e0811a1,
            0xf7537e82, 0xbd3af235, 0x2ad7d2bb, 0xeb86d391
    };

    void transform(const uint8_t block[BLOCK_SIZE]) noexcept;
    void init() noexcept;

    // State variables
    uint32_t state[4] {0x67452301, 0xefcdab89, 0x98badcfe, 0x10325476};
    uint64_t count {0};
    std::array<uint8_t, BLOCK_SIZE> buffer {0};
    std::array<uint8_t, DIGEST_SIZE> final_digest {0};
    bool finalized = false;

    // Helper functions
    static void encode(uint8_t* output, const uint32_t* input, size_t len) noexcept;
    static void decode(uint32_t* output, const uint8_t* input, size_t len) noexcept;

    // Round functions
    static constexpr uint32_t F(uint32_t x, uint32_t y, uint32_t z) noexcept { return (x & y) | (~x & z); }
    static constexpr uint32_t G(uint32_t x, uint32_t y, uint32_t z) noexcept { return (x & z) | (y & ~z); }
    static constexpr uint32_t H(uint32_t x, uint32_t y, uint32_t z) noexcept { return x ^ y ^ z; }
    static constexpr uint32_t I(uint32_t x, uint32_t y, uint32_t z) noexcept { return y ^ (x | ~z); }
    static constexpr uint32_t rotate_left(uint32_t x, int n) noexcept { return (x << n) | (x >> (32 - n)); }
};

#endif