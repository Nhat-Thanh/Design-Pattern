#include "VideoConverterFacade.h"
#include <iostream>

int main() {
    Video video("faded.mp4");
    VideoConverterFacade converter;
    Video new_video = converter.Convert(video, "mkv");

    std::cout << new_video.GetFileName() << '\n';
    return 0;
}
