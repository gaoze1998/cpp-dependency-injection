#ifndef __EVENT_HPP__
#define __EVENT_HPP__

#include "common.hpp"
struct Event
{
    std::string eventName;
    std::string eventMessage;
    Event(std::string eventName, std::string eventMessage) : eventName(eventName), eventMessage(eventMessage) {}
};

#endif
