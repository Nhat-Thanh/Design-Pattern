#ifndef _AUDIOBASE_H_
#define _AUDIOBASE_H_

#include <string>

class AudioBase {
    protected:
        std::string m_Content;

    public:
        AudioBase(const std::string& content);
        std::string GetContent() const;
};

#endif

