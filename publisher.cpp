#include "common.hpp"
#include "publisher.hpp"

void Publisher::addListener(std::string eventName, Listener* listener) {
    eventMap[eventName] = listener;
}

void Publisher::removeListener(std::string eventName) {
    eventMap.erase(eventName);
}

void Publisher::publish(Event e) {
    for (auto& [eventName, listener] : eventMap)
        if (eventName == e.eventName)
            listener->onEvent(e);
}