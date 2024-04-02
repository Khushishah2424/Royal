#ifndef CUSTOM_CLASS_HPP
#define CUSTOM_CLASS_HPP

class Baseclass{
    public:
    virtual void printmessage()= 0;

};

class DerivedClass : public Baseclass{
    public:
    virtual void printmessage() override;
};

#endif