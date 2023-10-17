#include "common.hpp"
#include "publisher.hpp"
#include "publisherfactory.hpp"
#include "event.hpp"
#include "listener.hpp"

class MyListener : public Listener {
    public:
        void onEvent(Event e) {
            std::cout << "Event: " << e.eventName << " Message: " << e.eventMessage << std::endl;
        }
};

int main() {
    Publisher* publisher = PublisherFactory::getPublisher();
    MyListener* listener = new MyListener();
    publisher->addListener("test", listener);
    publisher->publish(Event("test", "test"));

    publisher->removeListener("test");
    publisher->publish(Event("test", "test"));
    
    return 0;
}