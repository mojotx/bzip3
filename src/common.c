#include "common.h"

s32 read_neutral_s32(u8 * data) {
    return data[0] | (data[1] << 8) | (data[2] << 16) | (data[3] << 24);
}

void write_neutral_s32(u8 * data, s32 value) {
    data[0] = value & 0xFF;
    data[1] = (value >> 8) & 0xFF;
    data[2] = (value >> 16) & 0xFF;
    data[3] = (value >> 24) & 0xFF;
}