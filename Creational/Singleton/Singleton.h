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

Singleton* Singleton::m_Singleton = nullptr;

Singleton::Singleton() : m_Value(0) {}

Singleton* Singleton::GetInstance() {
    if (m_Singleton == nullptr) {
        m_Singleton = new Singleton;
    }
    return m_Singleton;
}

int Singleton::GetValue() const {
    return m_Value;
}

void Singleton::SetValue(const int& value) {
    m_Value = value;
}

#endif