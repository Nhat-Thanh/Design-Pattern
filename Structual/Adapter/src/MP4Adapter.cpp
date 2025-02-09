#include "MP4Adapter.h"

MP4Adapter::MP4Adapter(IMP4Adapter* adaptee) : m_Adaptee(adaptee) {}

MP4 MP4Adapter::Convert() {
    if (nullptr != m_Adaptee) {
        return MP4(m_Adaptee->Convert());;
    }
    return MP4("");
}

