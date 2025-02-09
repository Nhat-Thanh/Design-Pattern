#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton {
  private:
    static Singleton* m_Singleton;
    int m_Value;

  private:
    Singleton();

  public:
    Singleton(const Singleton& other) = delete;
    void operator=(const Singleton& other) = delete;
    int GetValue() const;
    void SetValue(const int& value);
    static Singleton* GetInstance();
};

#endif

