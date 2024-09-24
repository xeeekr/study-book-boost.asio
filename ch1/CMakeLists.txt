add_executable(ch1-1-Creating_endpoint_Client ch1-1-Creating_endpoint_Client.cpp)
target_link_libraries(ch1-1-Creating_endpoint_Client ${Boost_LIBRARIES})

add_executable(ch1-2-Creating_endpoint_Server ch1-2-Creating_endpoint_Server.cpp)
target_link_libraries(ch1-2-Creating_endpoint_Server ${Boost_LIBRARIES})

add_executable(ch1-3-Creating_an_active_socket_TCP_IPv4 ch1-3-Creating_an_active_socket_TCP_IPv4.cpp)
target_link_libraries(ch1-3-Creating_an_active_socket_TCP_IPv4 ${Boost_LIBRARIES})

add_executable(ch1-4-Creating_a_passive_socket ch1-4-Creating_a_passive_socket.cpp)
target_link_libraries(ch1-4-Creating_a_passive_socket ${Boost_LIBRARIES})

add_executable(ch1-5-Resolving_a_DNS_name_TCP ch1-5-Resolving_a_DNS_name_TCP.cpp)
target_link_libraries(ch1-5-Resolving_a_DNS_name_TCP ${Boost_LIBRARIES})

add_executable(ch1-6-Binding_a_socket_TCP_passive ch1-6-Binding_a_socket_TCP_passive.cpp)
target_link_libraries(ch1-6-Binding_a_socket_TCP_passive ${Boost_LIBRARIES})

add_executable(ch1-7-Connecting_a_socket ch1-7-Connecting_a_socket.cpp)
target_link_libraries(ch1-7-Connecting_a_socket ${Boost_LIBRARIES})

add_executable(ch1-8-Connecting_a_socket_DNS_name ch1-8-Connecting_a_socket_DNS_name.cpp)
target_link_libraries(ch1-8-Connecting_a_socket_DNS_name ${Boost_LIBRARIES})

add_executable(ch1-9-Accepting_a_connection ch1-9-Accepting_a_connection.cpp)
target_link_libraries(ch1-9-Accepting_a_connection ${Boost_LIBRARIES})
