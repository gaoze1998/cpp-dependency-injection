# cpp-dependency-injection
## demo
```bash
mkdir build
cd build
cmake ..
make
./cpp-event
```
## project file explained
main.cpp: demo app

event.hpp: Even structure defination

listener.hpp: Listener interface defination

publisher.hpp & publisher.cpp: Publisher class defination

publisherfactory.hpp & publisherfactory.cpp: provide a static method to get a singleton publisher

## how to use
you can directly copy all cpp & hpp file to your project;
add them to source file.