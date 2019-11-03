add_subdirectory(SOS)

if(NOT GFLAG_COMPILE_WIN_SHORT)
    add_subdirectory(superpmi)
endif()
