#pragma once
#include <cutils/trace.h>

inline void ATrace_beginSection(const char* sectionName) {
    atrace_begin(ATRACE_TAG_AIDL, sectionName);
}

inline void ATrace_endSection() {
    atrace_end(ATRACE_TAG_AIDL);
}
