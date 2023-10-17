#include "common.hpp"
#include "publisherfactory.hpp"

Publisher* PublisherFactory::publisher = nullptr;

Publisher* PublisherFactory::getPublisher() {
    if (publisher == nullptr)
        publisher = new Publisher();
    return publisher;
}