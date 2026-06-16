# Install script for directory: C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/Codigo fuente/PrismLauncher-develop/launcher

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/Compiled/xeolauncher")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/buildenv/Qt/Tools/mingw1310_64/bin/objdump.exe")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE EXECUTABLE FILES "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/build/Debug/xeolauncher.exe")
    if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./xeolauncher.exe" AND
       NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./xeolauncher.exe")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/buildenv/Qt/Tools/mingw1310_64/bin/strip.exe" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./xeolauncher.exe")
      endif()
    endif()
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE EXECUTABLE FILES "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/build/Release/xeolauncher.exe")
    if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./xeolauncher.exe" AND
       NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./xeolauncher.exe")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/buildenv/Qt/Tools/mingw1310_64/bin/strip.exe" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./xeolauncher.exe")
      endif()
    endif()
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE EXECUTABLE FILES "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/build/RelWithDebInfo/xeolauncher.exe")
    if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./xeolauncher.exe" AND
       NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./xeolauncher.exe")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/buildenv/Qt/Tools/mingw1310_64/bin/strip.exe" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./xeolauncher.exe")
      endif()
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE EXECUTABLE FILES "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/build/Debug/xeolauncher_filelink.exe")
    if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./xeolauncher_filelink.exe" AND
       NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./xeolauncher_filelink.exe")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/buildenv/Qt/Tools/mingw1310_64/bin/strip.exe" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./xeolauncher_filelink.exe")
      endif()
    endif()
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE EXECUTABLE FILES "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/build/Release/xeolauncher_filelink.exe")
    if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./xeolauncher_filelink.exe" AND
       NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./xeolauncher_filelink.exe")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/buildenv/Qt/Tools/mingw1310_64/bin/strip.exe" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./xeolauncher_filelink.exe")
      endif()
    endif()
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE EXECUTABLE FILES "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/build/RelWithDebInfo/xeolauncher_filelink.exe")
    if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./xeolauncher_filelink.exe" AND
       NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./xeolauncher_filelink.exe")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/buildenv/Qt/Tools/mingw1310_64/bin/strip.exe" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./xeolauncher_filelink.exe")
      endif()
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "bundle" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(GET_RUNTIME_DEPENDENCIES
      RESOLVED_DEPENDENCIES_VAR _CMAKE_DEPS
      EXECUTABLES
        "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/build/Debug/xeolauncher.exe"
      DIRECTORIES
        "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/Compiled/xeolauncher/bin"
        "C:/Users/xeodeo/Desktop/MultiMC/buildenv/Qt/Tools/CMake_64/bin"
        "/bin"
        "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/buildenv/Qt/6.7.3/mingw_64/lib"
        "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/buildenv/Qt/6.7.3/mingw_64/bin"
      PRE_EXCLUDE_REGEXES
        "^(api-ms-win|ext-ms)-.*\\.dll\$"
        "^azure.*\\.dll\$"
        "^vcruntime.*\\.dll\$"
      POST_EXCLUDE_REGEXES
        "system32"
      )
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(GET_RUNTIME_DEPENDENCIES
      RESOLVED_DEPENDENCIES_VAR _CMAKE_DEPS
      EXECUTABLES
        "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/build/Release/xeolauncher.exe"
      DIRECTORIES
        "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/Compiled/xeolauncher/bin"
        "C:/Users/xeodeo/Desktop/MultiMC/buildenv/Qt/Tools/CMake_64/bin"
        "/bin"
        "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/buildenv/Qt/6.7.3/mingw_64/lib"
        "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/buildenv/Qt/6.7.3/mingw_64/bin"
      PRE_EXCLUDE_REGEXES
        "^(api-ms-win|ext-ms)-.*\\.dll\$"
        "^azure.*\\.dll\$"
        "^vcruntime.*\\.dll\$"
      POST_EXCLUDE_REGEXES
        "system32"
      )
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(GET_RUNTIME_DEPENDENCIES
      RESOLVED_DEPENDENCIES_VAR _CMAKE_DEPS
      EXECUTABLES
        "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/build/RelWithDebInfo/xeolauncher.exe"
      DIRECTORIES
        "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/Compiled/xeolauncher/bin"
        "C:/Users/xeodeo/Desktop/MultiMC/buildenv/Qt/Tools/CMake_64/bin"
        "/bin"
        "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/buildenv/Qt/6.7.3/mingw_64/lib"
        "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/buildenv/Qt/6.7.3/mingw_64/bin"
      PRE_EXCLUDE_REGEXES
        "^(api-ms-win|ext-ms)-.*\\.dll\$"
        "^azure.*\\.dll\$"
        "^vcruntime.*\\.dll\$"
      POST_EXCLUDE_REGEXES
        "system32"
      )
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "bundle" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    foreach(_CMAKE_TMP_dep IN LISTS _CMAKE_DEPS)
      file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE SHARED_LIBRARY FILES ${_CMAKE_TMP_dep}
        FOLLOW_SYMLINK_CHAIN)
    endforeach()
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    foreach(_CMAKE_TMP_dep IN LISTS _CMAKE_DEPS)
      file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE SHARED_LIBRARY FILES ${_CMAKE_TMP_dep}
        FOLLOW_SYMLINK_CHAIN)
    endforeach()
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    foreach(_CMAKE_TMP_dep IN LISTS _CMAKE_DEPS)
      file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE SHARED_LIBRARY FILES ${_CMAKE_TMP_dep}
        FOLLOW_SYMLINK_CHAIN)
    endforeach()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "bundle" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    include("C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/build/.qt/deploy_XeoLauncher_ebe098e0a2-Debug.cmake")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    include("C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/build/.qt/deploy_XeoLauncher_ebe098e0a2-Release.cmake")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    include("C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/build/.qt/deploy_XeoLauncher_ebe098e0a2-RelWithDebInfo.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "bundle" OR NOT CMAKE_INSTALL_COMPONENT)
  
            set(QT_PLUGINS_DIR "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/buildenv/Qt/6.7.3/mingw_64/plugins")
            set(QT_LIBS_DIR "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/buildenv/Qt/6.7.3/mingw_64/lib")
            set(QT_LIBEXECS_DIR "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/buildenv/Qt/6.7.3/mingw_64/bin")
            set(CMAKE_SYSTEM_LIBRARY_PATH "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/Compiled/xeolauncher/bin;C:/Users/xeodeo/Desktop/MultiMC/buildenv/Qt/Tools/CMake_64/bin;/bin")
            set(CMAKE_INSTALL_PREFIX "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/Compiled/xeolauncher")
            
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "bundle" OR NOT CMAKE_INSTALL_COMPONENT)
              file(GLOB QT_IMAGEFORMAT_DLLS "${QT_PLUGINS_DIR}/imageformats/*.dll")
            set(CMAKE_GET_RUNTIME_DEPENDENCIES_TOOL objdump)
            file(GET_RUNTIME_DEPENDENCIES
                RESOLVED_DEPENDENCIES_VAR imageformatdeps
                LIBRARIES ${QT_IMAGEFORMAT_DLLS}
                DIRECTORIES
                    ${CMAKE_SYSTEM_LIBRARY_PATH}
                    ${QT_PLUGINS_DIR}
                    ${QT_LIBS_DIR}
                    ${QT_LIBEXECS_DIR}
                PRE_EXCLUDE_REGEXES
                    "^(api-ms-win|ext-ms)-.*\\.dll$"
                    # FIXME: Why aren't these caught by the below regex???
                    "^azure.*\\.dll$"
                    "^vcruntime.*\\.dll$"
                POST_EXCLUDE_REGEXES
                    "system32"
            )
            foreach(_lib ${imageformatdeps})
                file(INSTALL
                    DESTINATION ${CMAKE_INSTALL_PREFIX}
                    TYPE SHARED_LIBRARY
                    FOLLOW_SYMLINK_CHAIN
                    FILES ${_lib}
                )
            endforeach()
        
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "bundle" OR NOT CMAKE_INSTALL_COMPONENT)
  file(WRITE "${CMAKE_INSTALL_PREFIX}/./qt.conf" " ")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "bundle" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/Compiled/xeolauncher/./qtlogging.ini")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/Compiled/xeolauncher/." TYPE FILE FILES "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/Codigo fuente/PrismLauncher-develop/launcher/qtlogging.ini")
endif()

