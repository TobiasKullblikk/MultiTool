# CMakeList.txt : CMake project for DepositAccounts, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (MultiTool "MultiTool.cpp" "MultiTool.h" "Account.h" "Account.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET MultiTool PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
