include(C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/build/.qt/QtDeploySupport-Debug.cmake)
include("${CMAKE_CURRENT_LIST_DIR}/XeoLauncher-plugins-Debug.cmake" OPTIONAL)
set(__QT_DEPLOY_ALL_MODULES_FOUND_VIA_FIND_PACKAGE "ZlibPrivate;EntryPointPrivate;Core;Gui;Widgets;Concurrent;Network;Test;Xml;NetworkAuth;OpenGL;DBus")

        qt_deploy_runtime_dependencies(
            EXECUTABLE ./xeolauncher.exe
            BIN_DIR .
            LIBEXEC_DIR .
            LIB_DIR .
            PLUGINS_DIR .
            NO_OVERWRITE
            NO_TRANSLATIONS
            NO_COMPILER_RUNTIME
            DEPLOY_TOOL_OPTIONS --no-opengl-sw --no-quick-import --no-system-d3d-compiler --no-system-dxc-compiler --skip-plugin-types generic,networkinformation
        )