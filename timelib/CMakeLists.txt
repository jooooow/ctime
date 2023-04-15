add_library(timelib timelib.cpp date/src/tz.cpp)

find_package(CURL REQUIRED)

add_subdirectory(date)

target_compile_features(timelib PRIVATE cxx_std_14)

target_include_directories(timelib 
    INTERFACE 
    "${CMAKE_CURRENT_SOURCE_DIR}"
    PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/date/include"
)

target_link_libraries(timelib PRIVATE CURL::libcurl)

install(TARGETS timelib DESTINATION lib)

