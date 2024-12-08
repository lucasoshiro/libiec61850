
set (lib_common_SRCS
./common/string_map.cc
./common/map.cc
./common/linked_list.cc
./common/byte_buffer.cc
./common/string_utilities.cc
./common/buffer_chain.cc
./common/conversions.cc
./common/mem_alloc_linked_list.cc
./common/simple_allocator.cc
./mms/iso_server/iso_connection.cc
./mms/iso_server/iso_server.cc
./mms/iso_acse/acse.cc
./mms/iso_mms/common/mms_type_spec.cc
./mms/iso_mms/common/mms_value.cc
./mms/iso_mms/common/mms_common_msg.cc
./mms/iso_mms/client/mms_client_initiate.cc
./mms/iso_mms/client/mms_client_write.cc
./mms/iso_mms/client/mms_client_identify.cc
./mms/iso_mms/client/mms_client_status.cc
./mms/iso_mms/client/mms_client_named_variable_list.cc
./mms/iso_mms/client/mms_client_connection.cc
./mms/iso_mms/client/mms_client_files.cc
./mms/iso_mms/client/mms_client_get_namelist.cc
./mms/iso_mms/client/mms_client_get_var_access.cc
./mms/iso_mms/client/mms_client_common.cc
./mms/iso_mms/client/mms_client_read.cc
./mms/iso_mms/client/mms_client_journals.cc
./mms/iso_mms/server/mms_read_service.cc
./mms/iso_mms/server/mms_file_service.cc
./mms/iso_mms/server/mms_association_service.cc
./mms/iso_mms/server/mms_identify_service.cc
./mms/iso_mms/server/mms_status_service.cc
./mms/iso_mms/server/mms_named_variable_list_service.cc
./mms/iso_mms/server/mms_value_cache.cc
./mms/iso_mms/server/mms_get_namelist_service.cc
./mms/iso_mms/server/mms_access_result.cc
./mms/iso_mms/server/mms_server.cc
./mms/iso_mms/server/mms_server_common.cc
./mms/iso_mms/server/mms_named_variable_list.cc
./mms/iso_mms/server/mms_domain.cc
./mms/iso_mms/server/mms_device.cc
./mms/iso_mms/server/mms_information_report.cc
./mms/iso_mms/server/mms_journal.cc
./mms/iso_mms/server/mms_journal_service.cc
./mms/iso_mms/server/mms_server_connection.cc
./mms/iso_mms/server/mms_write_service.cc
./mms/iso_mms/server/mms_get_var_access_service.cc
./mms/iso_cotp/cotp.cc
./mms/iso_presentation/iso_presentation.cc
./mms/asn1/ber_decode.cc
./mms/asn1/asn1_ber_primitive_value.cc
./mms/asn1/ber_encoder.cc
./mms/asn1/ber_integer.cc
./mms/iso_client/iso_client_connection.cc
./mms/iso_common/iso_connection_parameters.cc
./mms/iso_session/iso_session.cc
./iec61850/client/client_control.cc
./iec61850/client/client_report_control.cc
./iec61850/client/client_goose_control.cc
./iec61850/client/client_sv_control.cc
./iec61850/client/client_report.cc
./iec61850/client/ied_connection.cc
./iec61850/common/iec61850_common.cc
./iec61850/server/impl/ied_server.cc
./iec61850/server/impl/ied_server_config.cc
./iec61850/server/impl/client_connection.cc
./iec61850/server/model/model.cc
./iec61850/server/model/dynamic_model.cc
./iec61850/server/model/cdc.cc
./iec61850/server/model/config_file_parser.cc
./iec61850/server/mms_mapping/control.cc
./iec61850/server/mms_mapping/mms_mapping.cc
./iec61850/server/mms_mapping/reporting.cc
./iec61850/server/mms_mapping/mms_goose.cc
./iec61850/server/mms_mapping/mms_sv.cc
./iec61850/server/mms_mapping/logging.cc
./logging/log_storage.cc
)

set (lib_asn1c_SRCS
./mms/iso_mms/asn1c/DataAccessError.cc
./mms/iso_mms/asn1c/DeleteNamedVariableListRequest.cc
./mms/iso_mms/asn1c/constr_SET_OF.cc
./mms/iso_mms/asn1c/MmsPdu.cc
./mms/iso_mms/asn1c/GetNamedVariableListAttributesResponse.cc
./mms/iso_mms/asn1c/BIT_STRING.cc
./mms/iso_mms/asn1c/ber_tlv_tag.cc
./mms/iso_mms/asn1c/constr_SEQUENCE_OF.cc
./mms/iso_mms/asn1c/asn_SET_OF.cc
./mms/iso_mms/asn1c/ReadResponse.cc
./mms/iso_mms/asn1c/InformationReport.cc
./mms/iso_mms/asn1c/ConfirmedServiceRequest.cc
./mms/iso_mms/asn1c/DeleteNamedVariableListResponse.cc
./mms/iso_mms/asn1c/asn_SEQUENCE_OF.cc
./mms/iso_mms/asn1c/VariableAccessSpecification.cc
./mms/iso_mms/asn1c/GetVariableAccessAttributesRequest.cc
./mms/iso_mms/asn1c/xer_support.cc
./mms/iso_mms/asn1c/ObjectName.cc
./mms/iso_mms/asn1c/NativeEnumerated.cc
./mms/iso_mms/asn1c/per_encoder.cc
./mms/iso_mms/asn1c/constr_SEQUENCE.cc
./mms/iso_mms/asn1c/GetNameListResponse.cc
./mms/iso_mms/asn1c/MMSString.cc
./mms/iso_mms/asn1c/InitiateErrorPdu.cc
./mms/iso_mms/asn1c/IndexRangeSeq.cc
./mms/iso_mms/asn1c/ConfirmedErrorPDU.cc
./mms/iso_mms/asn1c/UnconfirmedService.cc
./mms/iso_mms/asn1c/UTF8String.cc
./mms/iso_mms/asn1c/ServiceError.cc
./mms/iso_mms/asn1c/TimeOfDay.cc
./mms/iso_mms/asn1c/GetNameListRequest.cc
./mms/iso_mms/asn1c/asn_codecs_prim.cc
./mms/iso_mms/asn1c/Data.cc
./mms/iso_mms/asn1c/ScatteredAccessDescription.cc
./mms/iso_mms/asn1c/ReadRequest.cc
./mms/iso_mms/asn1c/per_decoder.cc
./mms/iso_mms/asn1c/Identifier.cc
./mms/iso_mms/asn1c/ServiceSupportOptions.cc
./mms/iso_mms/asn1c/Integer8.cc
./mms/iso_mms/asn1c/ConfirmedServiceResponse.cc
./mms/iso_mms/asn1c/ParameterSupportOptions.cc
./mms/iso_mms/asn1c/Integer16.cc
./mms/iso_mms/asn1c/ber_tlv_length.cc
./mms/iso_mms/asn1c/OCTET_STRING.cc
./mms/iso_mms/asn1c/DefineNamedVariableListRequest.cc
./mms/iso_mms/asn1c/FloatingPoint.cc
./mms/iso_mms/asn1c/xer_encoder.cc
./mms/iso_mms/asn1c/Unsigned8.cc
./mms/iso_mms/asn1c/BOOLEAN.cc
./mms/iso_mms/asn1c/INTEGER.cc
./mms/iso_mms/asn1c/UnconfirmedPDU.cc
./mms/iso_mms/asn1c/DataSequence.cc
./mms/iso_mms/asn1c/constraints.cc
./mms/iso_mms/asn1c/der_encoder.cc
./mms/iso_mms/asn1c/VisibleString.cc
./mms/iso_mms/asn1c/InitiateResponsePdu.cc
./mms/iso_mms/asn1c/StructComponent.cc
./mms/iso_mms/asn1c/Address.cc
./mms/iso_mms/asn1c/Unsigned16.cc
./mms/iso_mms/asn1c/ber_decoder.cc
./mms/iso_mms/asn1c/per_support.cc
./mms/iso_mms/asn1c/WriteResponse.cc
./mms/iso_mms/asn1c/InitRequestDetail.cc
./mms/iso_mms/asn1c/InitiateRequestPdu.cc
./mms/iso_mms/asn1c/DefineNamedVariableListResponse.cc
./mms/iso_mms/asn1c/NULL.cc
./mms/iso_mms/asn1c/ListOfVariableSeq.cc
./mms/iso_mms/asn1c/UtcTime.cc
./mms/iso_mms/asn1c/ConcludeResponsePDU.cc
./mms/iso_mms/asn1c/AccessResult.cc
./mms/iso_mms/asn1c/Integer32.cc
./mms/iso_mms/asn1c/GetNamedVariableListAttributesRequest.cc
./mms/iso_mms/asn1c/VariableSpecification.cc
./mms/iso_mms/asn1c/Unsigned32.cc
./mms/iso_mms/asn1c/constr_CHOICE.cc
./mms/iso_mms/asn1c/AlternateAccess.cc
./mms/iso_mms/asn1c/ObjectClass.cc
./mms/iso_mms/asn1c/InitResponseDetail.cc
./mms/iso_mms/asn1c/ConfirmedResponsePdu.cc
./mms/iso_mms/asn1c/GetVariableAccessAttributesResponse.cc
./mms/iso_mms/asn1c/NativeInteger.cc
./mms/iso_mms/asn1c/xer_decoder.cc
./mms/iso_mms/asn1c/AlternateAccessSelection.cc
./mms/iso_mms/asn1c/ConfirmedRequestPdu.cc
./mms/iso_mms/asn1c/ConcludeRequestPDU.cc
./mms/iso_mms/asn1c/WriteRequest.cc
./mms/iso_mms/asn1c/RejectPDU.cc
./mms/iso_mms/asn1c/TypeSpecification.cc
./mms/iso_mms/asn1c/constr_TYPE.cc
./mms/iso_mms/asn1c/GeneralizedTime.cc
)

set (lib_goose_SRCS
./goose/goose_subscriber.cc
./goose/goose_receiver.cc
./goose/goose_publisher.cc
)

set (lib_sv_SRCS
./sampled_values/sv_subscriber.cc
./sampled_values/sv_publisher.cc
)

set (lib_linux_SRCS
)

set (lib_windows_SRCS
)

set (lib_bsd_SRCS
)

IF(WIN32)

if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/../third_party/winpcap/Lib/wpcap.lib")
message("Found winpcap -> can compile with GOOSE support")
set(WITH_WPCAP 1)
endif()

set_source_files_properties(${lib_asn1c_SRCS}
                                       PROPERTIES LANGUAGE C)

IF(MSVC)
set_source_files_properties(${lib_common_SRCS} ${lib_windows_SRCS}
                                       PROPERTIES LANGUAGE CXX)
ENDIF()

IF(WITH_WPCAP)
IF(MSVC)
set_source_files_properties(${lib_goose_SRCS}
                                       PROPERTIES LANGUAGE CXX)
set_source_files_properties(${lib_sv_SRCS}
                                       PROPERTIES LANGUAGE CXX)                                                                           
ENDIF()
ELSE()
add_definitions(-DEXCLUDE_ETHERNET_WINDOWS)
ENDIF()

include_directories(
  ../third_party/winpcap/include
)

IF(WITH_WPCAP)
set (library_SRCS
    ${lib_common_SRCS}
    ${lib_asn1c_SRCS}
    ${lib_goose_SRCS}
    ${lib_sv_SRCS}
    ${lib_windows_SRCS}
)

ELSE()
set (library_SRCS
    ${lib_common_SRCS}
    ${lib_asn1c_SRCS}
    ${lib_windows_SRCS}
)

ENDIF(WITH_WPCAP)

ELSEIF(UNIX)
IF(APPLE)
set (library_SRCS
    ${lib_common_SRCS}
    ${lib_asn1c_SRCS}
    ${lib_goose_SRCS}
    ${lib_sv_SRCS}
    ${lib_bsd_SRCS}
)
ELSEIF(${CMAKE_SYSTEM_NAME} MATCHES "FreeBSD")
set (library_SRCS
    ${lib_common_SRCS}
    ${lib_asn1c_SRCS}
    ${lib_goose_SRCS}
    ${lib_sv_SRCS}
    ${lib_bsd_SRCS}
)
ELSE()
set (library_SRCS
    ${lib_common_SRCS}
    ${lib_asn1c_SRCS}
    ${lib_goose_SRCS}
    ${lib_sv_SRCS}
    ${lib_linux_SRCS}	
)
ENDIF(APPLE)
ENDIF(WIN32)


include (GenerateExportHeader)

set(RES_FILES "")
if ( WIN32 )
	# Adding RC resource file for adding information to the archive
	set(RES_FILES "${CMAKE_CURRENT_BINARY_DIR}/version.rc")
	message(STATUS "Generating RC file : ${RES_FILES}")
	configure_file(
			${CMAKE_CURRENT_SOURCE_DIR}/version.rc.in
			${RES_FILES}
			@ONLY)
	if( MINGW )
		set(CMAKE_RC_COMPILER_INIT windres)
		ENABLE_LANGUAGE(RC)
		SET(CMAKE_RC_COMPILE_OBJECT
		"<CMAKE_RC_COMPILER> <FLAGS> -O coff <DEFINES> -i <SOURCE> -o <OBJECT>")
	endif(MINGW)
	set(library_SRCS ${library_SRCS} ${RES_FILES})
endif( WIN32 )

add_library (iec61850-shared SHARED ${library_SRCS} )

set_target_properties(iec61850-shared PROPERTIES
           OUTPUT_NAME iec61850
           SOVERSION "${LIB_VERSION_MAJOR}.${LIB_VERSION_MINOR}.${LIB_VERSION_PATCH}"
)

target_compile_definitions(iec61850-shared PRIVATE EXPORT_FUNCTIONS_FOR_DLL)

target_link_libraries(iec61850-shared
	hal-shared
)

GENERATE_EXPORT_HEADER(iec61850-shared
			BASE_NAME iec61850-shared
			EXPORT_MACRO_NAME iec61850-shared_EXPORT
			EXPORT_FILE_NAME iec61850-shared_export.h
			STATIC_DEFINE iec61850-shared_BUILT_AS_STATIC
)

add_library (iec61850 STATIC ${library_SRCS})

target_link_libraries(iec61850
	hal
)

IF(UNIX)
  IF (CONFIG_SYSTEM_HAS_CLOCK_GETTIME)
     target_link_libraries (iec61850
         -lpthread
         -lm
         -lrt
     )
  ELSE ()
     target_link_libraries (iec61850
         -lpthread
         -lm
     )
  ENDIF (CONFIG_SYSTEM_HAS_CLOCK_GETTIME)
ENDIF(UNIX)
IF(MINGW)
  target_link_libraries(iec61850-shared ws2_32 iphlpapi)
  target_link_libraries(iec61850 ws2_32 iphlpapi)
ENDIF(MINGW)

iF(WITH_WPCAP)
target_link_libraries(iec61850
   ${CMAKE_CURRENT_SOURCE_DIR}/../third_party/winpcap/lib/wpcap.lib
   ${CMAKE_CURRENT_SOURCE_DIR}/../third_party/winpcap/lib/packet.lib
)
target_link_libraries(iec61850-shared
   ${CMAKE_CURRENT_SOURCE_DIR}/../third_party/winpcap/lib/wpcap.lib
   ${CMAKE_CURRENT_SOURCE_DIR}/../third_party/winpcap/lib/packet.lib
)

ENDIF(WITH_WPCAP)
find_package(Doxygen)
if(DOXYGEN_FOUND)
  configure_file(Doxyfile.in ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY)
  add_custom_target(doc ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} COMMENT "Generating API documentation with Doxygen" VERBATIM)

  configure_file(doxygen/Doxyfile.NET.in ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile.NET @ONLY)
  add_custom_target(doc-net ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile.NET WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} COMMENT "Generating API documentation with Doxygen" VERBATIM)

endif(DOXYGEN_FOUND)

set(BINDIR "bin")
set(LIBDIR "lib")
if(UNIX)
    # GNUInstallDirs is required for Debian multiarch
    include(GNUInstallDirs)
    set(LIBDIR ${CMAKE_INSTALL_LIBDIR})
    set(BINDIR ${CMAKE_INSTALL_BINDIR})

    configure_file(
        ${CMAKE_CURRENT_LIST_DIR}/libiec61850.pc.in
        ${CMAKE_CURRENT_BINARY_DIR}/libiec61850.pc @ONLY
    )
    install(FILES "${CMAKE_CURRENT_BINARY_DIR}/libiec61850.pc" DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pkgconfig")
endif()

install (TARGETS iec61850 iec61850-shared
	RUNTIME DESTINATION ${BINDIR} COMPONENT Applications
	ARCHIVE DESTINATION ${LIBDIR} COMPONENT Libraries
    LIBRARY DESTINATION ${LIBDIR} COMPONENT Libraries
)

