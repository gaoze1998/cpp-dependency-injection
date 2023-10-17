#ifndef __LISTENER_HPP__
#define __LISTENER_HPP__
#include "common.hpp"
#include "event.hpp"

class Listener {
    public:
        virtual void onEvent(Event e) = 0;
    private:
        std::string eventName;
};

#endif