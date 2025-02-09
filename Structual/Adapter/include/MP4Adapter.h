#ifndef MP4_ADAPTER_H
#define MP4_ADAPTER_H

#include "IMP4Adapter.h"
#include "MP4.h"

class MP4Adapter {
  private:
    IMP4Adapter* m_Adaptee;

  public:
    MP4Adapter(IMP4Adapter* adaptee);
    MP4 Convert();
};

#endif

