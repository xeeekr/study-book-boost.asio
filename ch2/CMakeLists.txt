add_executable(ch2-01-FixedLengthBufferOutput ch2-01-FixedLengthBufferOutput.cpp)
target_link_libraries(ch2-01-FixedLengthBufferOutput ${Boost_LIBRARIES})

add_executable(ch2-02-FixedLengthBufferInput ch2-02-FixedLengthBufferInput.cpp)
target_link_libraries(ch2-02-FixedLengthBufferInput ${Boost_LIBRARIES})

add_executable(ch2-03-ExtensibleStreamOrientedBuffer ch2-03-ExtensibleStreamOrientedBuffer.cpp)
target_link_libraries(ch2-03-ExtensibleStreamOrientedBuffer ${Boost_LIBRARIES})

add_executable(ch2-04-WritingToTCPSockSync ch2-04-WritingToTCPSockSync.cpp)
target_link_libraries(ch2-04-WritingToTCPSockSync ${Boost_LIBRARIES})

add_executable(ch2-05-ReadingFromTCPSockSync ch2-05-ReadingFromTCPSockSync.cpp)
target_link_libraries(ch2-05-ReadingFromTCPSockSync ${Boost_LIBRARIES})

add_executable(ch2-06-WritingToTCPSockAsync ch2-06-WritingToTCPSockAsync.cpp)
target_link_libraries(ch2-06-WritingToTCPSockAsync ${Boost_LIBRARIES})

add_executable(ch2-07-WritingToTCPSockAsyncEnhanced ch2-07-WritingToTCPSockAsyncEnhanced.cpp)
target_link_libraries(ch2-07-WritingToTCPSockAsyncEnhanced ${Boost_LIBRARIES})

add_executable(ch2-08-ReadingFromTCPSockAsync ch2-08-ReadingFromTCPSockAsync.cpp)
target_link_libraries(ch2-08-ReadingFromTCPSockAsync ${Boost_LIBRARIES})

add_executable(ch2-09-ReadingFromTCPSockAsyncEnhanced ch2-09-ReadingFromTCPSockAsyncEnhanced.cpp)
target_link_libraries(ch2-09-ReadingFromTCPSockAsyncEnhanced ${Boost_LIBRARIES})

add_executable(ch2-10-CancellingAsyncOperations ch2-10-CancellingAsyncOperations.cpp)
target_link_libraries(ch2-10-CancellingAsyncOperations ${Boost_LIBRARIES})

add_executable(ch2-11-SockShutdownClient ch2-11-SockShutdownClient.cpp)
target_link_libraries(ch2-11-SockShutdownClient ${Boost_LIBRARIES})

add_executable(ch2-12-SockShutdownServer ch2-12-SockShutdownServer.cpp)
target_link_libraries(ch2-12-SockShutdownServer ${Boost_LIBRARIES})
