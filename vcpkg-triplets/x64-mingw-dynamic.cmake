set(VCPKG_TARGET_ARCHITECTURE x64)
set(VCPKG_CRT_LINKAGE dynamic)
set(VCPKG_LIBRARY_LINKAGE dynamic)
set(VCPKG_ENV_PASSTHROUGH PATH)

set(VCPKG_CMAKE_SYSTEM_NAME MinGW)
set(VCPKG_POLICY_DLLS_WITHOUT_LIBS enabled)

# Use LLVM-MinGW (clang) instead of GCC
set(VCPKG_CHAINLOAD_TOOLCHAIN_FILE "C:/Users/xeodeo/Desktop/MultiMC/Nuevo proyecto/vcpkg-llvm-toolchain.cmake")
