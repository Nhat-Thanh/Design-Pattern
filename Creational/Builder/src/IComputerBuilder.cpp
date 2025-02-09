


#include <string>

class IComputerBuilder {
  public:
    virtual void BuildMainboard(const std::string& name) = 0;
    virtual void BuildCPU(const std::string& name) = 0;
    virtual void BuildPSU(const std::string& name) = 0;
    virtual void BuildRAM(const std::string& name) = 0;
    virtual void PrintComponents() const = 0;
};

