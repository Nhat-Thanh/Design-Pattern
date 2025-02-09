#ifndef MP4_ADAPTER_H
#define MP4_ADAPTER_H

#include "MP4.h"
#include "VideoExtention.h"

class MP4Adapter {
  private:
    VideoExtension* m_Adaptee;

  public:
    MP4Adapter(VideoExtension* adaptee);
    MP4 Convert();
};

MP4Adapter::MP4Adapter(VideoExtension* adaptee) : m_Adaptee(adaptee) {}

MP4 MP4Adapter::Convert() {
    MP4 FileInMP4 = MP4(m_Adaptee->GetContent());
    return FileInMP4;
}

#endif