#ifndef __PUBLISHERFACTORY_HPP__
#define __PUBLISHERFACTORY_HPP__
#include "common.hpp"
#include "publisher.hpp"

class PublisherFactory {
    private:
        static Publisher* publisher;

        PublisherFactory() {}
    public:
        static Publisher* getPublisher();
};

#endif