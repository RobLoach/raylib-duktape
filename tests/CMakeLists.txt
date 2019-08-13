# Add catch tests macro
macro(ADD_CATCH_TESTS executable)
  if (MSVC)
    file(TO_NATIVE_PATH "${QT_LIBRARY_DIR}" QT_LIB_PATH)
    set(NEWPATH "${QT_LIB_PATH};$ENV{PATH}")
  else()
    set(NEWPATH $ENV{PATH})
  endif()

  get_target_property(target_files ${executable} SOURCES)

  message("Files: ${target_files}")

  foreach(source ${target_files})
    if(NOT "${source}" MATCHES "/moc_.*cxx")
      string(REGEX MATCH .*cpp source "${source}")
      if(source)
        file(READ "${source}" contents)
        string(REGEX MATCHALL "TEST_CASE\\([ ]*\"[^\"]+\"" found_tests ${contents})
        foreach(hit ${found_tests})
          message("Found Test: ${hit}")
          string(REGEX REPLACE "TEST_CASE\\([ ]*(\"[^\"]+\").*" "\\1" test_name ${hit})
          add_test(${test_name} "${executable}" ${test_name})
          set_tests_properties(${test_name} PROPERTIES TIMEOUT 660 ENVIRONMENT "PATH=${NEWPATH}")
        endforeach()
      endif()
    endif()
  endforeach()
endmacro()


find_package(DuktapeCC)
find_package(Raylib)

list(APPEND LIBS raylib duktapecc raylib-js-h)
list(APPEND SOURCES raylib-js-test.cpp)
add_executable(raylib-js-test ${SOURCES})

target_link_libraries(raylib-js-test ${LIBS})
ADD_CATCH_TESTS(raylib-js-test)
