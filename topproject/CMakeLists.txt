add_executable(Project main.cpp)

target_link_libraries(Project PUBLIC ProjectLib)

target_include_directories(Project PUBLIC
                          "C:/SS/boost/boost_1_77_0"
                          )

target_link_directories(Project PUBLIC
                          "C:/SS/boost/boost_1_77_0/stage/lib"
                          )