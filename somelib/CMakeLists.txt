find_package(embree 3.0 REQUIRED)

file(GLOB SRCS "src/*" "include/*")
include_directories(somelib PRIVATE "include/somelib")
include_directories(somelib PRIVATE ${EMBREE_INCLUDE_DIRS})
add_library(somelib ${SRCS})
target_link_libraries(somelib ${EMBREE_LIBRARIES})
