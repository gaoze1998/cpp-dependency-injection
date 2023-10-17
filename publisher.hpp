#ifndef __PUBLISHER_HPP__
#define __PUBLISHER_HPP__
#include "common.hpp"
#include "listener.hpp"

class Publisher {
    private:
        std::map<std::string, Listener*> eventMap;
    public:
        void addListener(std::string eventName, Listener* listener);
        void removeListener(std::string eventName);
        void publish(Event e);
};

#endif