# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/build

# Include any dependencies generated for this target.
include Server/CMakeFiles/server.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Server/CMakeFiles/server.dir/compiler_depend.make

# Include the progress variables for this target.
include Server/CMakeFiles/server.dir/progress.make

# Include the compile flags for this target's objects.
include Server/CMakeFiles/server.dir/flags.make

Server/CMakeFiles/server.dir/main.cpp.o: Server/CMakeFiles/server.dir/flags.make
Server/CMakeFiles/server.dir/main.cpp.o: ../Server/main.cpp
Server/CMakeFiles/server.dir/main.cpp.o: Server/CMakeFiles/server.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Server/CMakeFiles/server.dir/main.cpp.o"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/build/Server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Server/CMakeFiles/server.dir/main.cpp.o -MF CMakeFiles/server.dir/main.cpp.o.d -o CMakeFiles/server.dir/main.cpp.o -c /home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/Server/main.cpp

Server/CMakeFiles/server.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/main.cpp.i"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/build/Server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/Server/main.cpp > CMakeFiles/server.dir/main.cpp.i

Server/CMakeFiles/server.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/main.cpp.s"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/build/Server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/Server/main.cpp -o CMakeFiles/server.dir/main.cpp.s

Server/CMakeFiles/server.dir/rpc_manager.cpp.o: Server/CMakeFiles/server.dir/flags.make
Server/CMakeFiles/server.dir/rpc_manager.cpp.o: ../Server/rpc_manager.cpp
Server/CMakeFiles/server.dir/rpc_manager.cpp.o: Server/CMakeFiles/server.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Server/CMakeFiles/server.dir/rpc_manager.cpp.o"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/build/Server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Server/CMakeFiles/server.dir/rpc_manager.cpp.o -MF CMakeFiles/server.dir/rpc_manager.cpp.o.d -o CMakeFiles/server.dir/rpc_manager.cpp.o -c /home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/Server/rpc_manager.cpp

Server/CMakeFiles/server.dir/rpc_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/rpc_manager.cpp.i"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/build/Server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/Server/rpc_manager.cpp > CMakeFiles/server.dir/rpc_manager.cpp.i

Server/CMakeFiles/server.dir/rpc_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/rpc_manager.cpp.s"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/build/Server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/Server/rpc_manager.cpp -o CMakeFiles/server.dir/rpc_manager.cpp.s

# Object files for target server
server_OBJECTS = \
"CMakeFiles/server.dir/main.cpp.o" \
"CMakeFiles/server.dir/rpc_manager.cpp.o"

# External object files for target server
server_EXTERNAL_OBJECTS =

Server/server: Server/CMakeFiles/server.dir/main.cpp.o
Server/server: Server/CMakeFiles/server.dir/rpc_manager.cpp.o
Server/server: Server/CMakeFiles/server.dir/build.make
Server/server: Server/CMakeFiles/server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable server"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/build/Server && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Server/CMakeFiles/server.dir/build: Server/server
.PHONY : Server/CMakeFiles/server.dir/build

Server/CMakeFiles/server.dir/clean:
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/build/Server && $(CMAKE_COMMAND) -P CMakeFiles/server.dir/cmake_clean.cmake
.PHONY : Server/CMakeFiles/server.dir/clean

Server/CMakeFiles/server.dir/depend:
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC /home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/Server /home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/build /home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/build/Server /home/snowk/repository/Linux-Distributed-Monitor/Monitor/RPC/build/Server/CMakeFiles/server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Server/CMakeFiles/server.dir/depend

