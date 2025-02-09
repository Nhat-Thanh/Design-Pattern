#include "AVI.h"
#include "MKV.h"
#include "MP4.h"
#include "MP4Adapter.h"
#include <iostream>

void PlayMP4(const MP4& FileInMp4) {
    std::cout << FileInMp4.GetContent() << '\n';
}

int main() {
    MKV mkvfile("Different World");
    AVI avifile("End of Time");

    MP4Adapter MKV2MP4(&mkvfile);
    MP4Adapter AVI2MP4(&avifile);

    PlayMP4(MKV2MP4.Convert());
    PlayMP4(AVI2MP4.Convert());

    return 0;
}
