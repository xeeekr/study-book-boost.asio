add_executable(ch3-01-SyncTCPClient ch3-01-SyncTCPClient.cpp)
target_link_libraries(ch3-01-SyncTCPClient ${Boost_LIBRARIES})

add_executable(ch3-02-SyncUDPClient ch3-02-SyncUDPClient.cpp)
target_link_libraries(ch3-02-SyncUDPClient ${Boost_LIBRARIES})

add_executable(ch3-03-AsyncTCPClient ch3-03-AsyncTCPClient.cpp)
target_link_libraries(ch3-03-AsyncTCPClient ${Boost_LIBRARIES})
