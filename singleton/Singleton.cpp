#ifndef SINGLETON
#define SINGLETON

#include <mutex>


class Singleton {
private:
    static Singleton *instance_;
    static std::mutex mutex_;
protected:
    std::string value_;

    Singleton(const std::string value) : value_(value) {}
    
    ~Singleton() {}
public:
    Singleton(Singleton &other) = delete;

    void operator=(const Singleton &) = delete;

    static Singleton *GetInstance(const std::string &value);

    void SomeBusinessLogic() {}

    std::string value() const {
        return this->value_;
    }
};


Singleton *Singleton::instance_ {nullptr};
std::mutex Singleton::mutex_;


Singleton *Singleton::GetInstance(const std::string &value)
{
    std::lock_guard<std::mutex> lock(mutex_);
    if (instance_ == nullptr)
    {
        instance_ = new Singleton(value);
    }

    return instance_;
};


#endif