#ifndef PTRSHAED_H
#define PTRSHAED_H
#include <memory>


class ptrshaed
{
private:
    int mon_int;
    std::string nom;


public:
    ptrshaed(int i):mon_int(i) {}

    int getInt(){return mon_int;}



};

#endif // PTRSHAED_H
