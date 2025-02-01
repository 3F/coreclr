project(mscorpe)

add_definitions(-DFEATURE_CORECLR)

add_compile_options(/std:c++latest)

set(MSCORPE_SOURCES
  iceefilegen.cpp
  ceefilegenwriter.cpp
  pewriter.cpp
  ceefilegenwritertokens.cpp
)

add_library_clr(mscorpe STATIC
  ${MSCORPE_SOURCES}
)
