file(GLOB sources "*.cpp")
file(GLOB headers "*.cpp")

include_directories(BEFORE ..)

add_library(devcore ${sources} ${headers})