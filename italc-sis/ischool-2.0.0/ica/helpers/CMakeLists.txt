LINK_LIBRARIES(${PAM_LIBRARY})
INCLUDE_DIRECTORIES(${PAM_INCLUDE_DIR})
ADD_EXECUTABLE(ischool_auth_helper ${CMAKE_CURRENT_SOURCE_DIR}/IschoolAuthHelper.cpp)
INSTALL(TARGETS ischool_auth_helper RUNTIME DESTINATION bin PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE SETUID GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE)
