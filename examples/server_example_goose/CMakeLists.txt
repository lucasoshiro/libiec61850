include_directories(
   .
)

set(server_example_goose_SRCS
   server_example_goose.cc
   static_model.cc
)

IF(MSVC)
set_source_files_properties(${server_example_goose_SRCS}
                                       PROPERTIES LANGUAGE CXX)
ENDIF(MSVC)

add_executable(server_example_goose
  ${server_example_goose_SRCS}
)

target_link_libraries(server_example_goose
    iec61850
)


