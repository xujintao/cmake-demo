if(USE_HELLO)
aux_source_directory(. DIR_LIB)
add_library(hello STATIC ${DIR_LIB})
endif(USE_HELLO)