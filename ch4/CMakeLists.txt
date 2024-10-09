add_executable(ch04-01-SyncIterative ch04-01-SyncIterative.cpp)
target_link_libraries(ch04-01-SyncIterative ${Boost_LIBRARIES})

add_executable(ch04-02-SyncParallel ch04-02-SyncParallel.cpp)
target_link_libraries(ch04-02-SyncParallel ${Boost_LIBRARIES})

add_executable(ch04-03-AsyncParallel ch04-03-AsyncParallel.cpp)
target_link_libraries(ch04-03-AsyncParallel ${Boost_LIBRARIES})
