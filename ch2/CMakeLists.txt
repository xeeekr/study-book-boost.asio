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
