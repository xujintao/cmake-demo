option(USE_HELLO "use hello library" ON)
# option(USE_HELLO "use hello library")

include_directories(${PROJECT_SOURCE_DIR}/config)

configure_file(
    ${PROJECT_SOURCE_DIR}/config/config.h.in
    ${PROJECT_SOURCE_DIR}/config/config.h
)

if(USE_HELLO)
include_directories(${PROJECT_SOURCE_DIR}/hello)
endif(USE_HELLO)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

aux_source_directory(. DIR_MAIN)
add_executable(${PROJECT_NAME} ${DIR_MAIN})

if(USE_HELLO)
target_link_libraries(${PROJECT_NAME} hello)
endif(USE_HELLO)