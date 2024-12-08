include_directories(
   .
)

set(server_example_sg_SRCS
   server_example_sg.cc
   static_model.cc
)

IF(MSVC)
set_source_files_properties(${server_example_sg_SRCS}
                                       PROPERTIES LANGUAGE CXX)
ENDIF(MSVC)

add_executable(server_example_sg
  ${server_example_sg_SRCS}
)

target_link_libraries(server_example_sg
    iec61850
)
