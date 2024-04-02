#ifndef PRACTICE_HPP
#define PRACTICE_HPP

class baselclass{
    public:
    virtual void printmsg () = 0;
};

class derivedclass : public baselclass{
    public:
    virtual void printmsg()override;
};
#endif