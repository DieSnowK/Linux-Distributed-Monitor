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
CMAKE_SOURCE_DIR = /home/snowk/repository/Linux-Distributed-Monitor/Monitor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build

# Include any dependencies generated for this target.
include Monitor/CMakeFiles/monitor.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Monitor/CMakeFiles/monitor.dir/compiler_depend.make

# Include the progress variables for this target.
include Monitor/CMakeFiles/monitor.dir/progress.make

# Include the compile flags for this target's objects.
include Monitor/CMakeFiles/monitor.dir/flags.make

Monitor/CMakeFiles/monitor.dir/main.cpp.o: Monitor/CMakeFiles/monitor.dir/flags.make
Monitor/CMakeFiles/monitor.dir/main.cpp.o: ../Monitor/main.cpp
Monitor/CMakeFiles/monitor.dir/main.cpp.o: Monitor/CMakeFiles/monitor.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Monitor/CMakeFiles/monitor.dir/main.cpp.o"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Monitor/CMakeFiles/monitor.dir/main.cpp.o -MF CMakeFiles/monitor.dir/main.cpp.o.d -o CMakeFiles/monitor.dir/main.cpp.o -c /home/snowk/repository/Linux-Distributed-Monitor/Monitor/Monitor/main.cpp

Monitor/CMakeFiles/monitor.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/monitor.dir/main.cpp.i"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snowk/repository/Linux-Distributed-Monitor/Monitor/Monitor/main.cpp > CMakeFiles/monitor.dir/main.cpp.i

Monitor/CMakeFiles/monitor.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/monitor.dir/main.cpp.s"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snowk/repository/Linux-Distributed-Monitor/Monitor/Monitor/main.cpp -o CMakeFiles/monitor.dir/main.cpp.s

Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_load_monitor.cpp.o: Monitor/CMakeFiles/monitor.dir/flags.make
Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_load_monitor.cpp.o: ../Monitor/src/monitor/cpu_load_monitor.cpp
Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_load_monitor.cpp.o: Monitor/CMakeFiles/monitor.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_load_monitor.cpp.o"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_load_monitor.cpp.o -MF CMakeFiles/monitor.dir/src/monitor/cpu_load_monitor.cpp.o.d -o CMakeFiles/monitor.dir/src/monitor/cpu_load_monitor.cpp.o -c /home/snowk/repository/Linux-Distributed-Monitor/Monitor/Monitor/src/monitor/cpu_load_monitor.cpp

Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_load_monitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/monitor.dir/src/monitor/cpu_load_monitor.cpp.i"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snowk/repository/Linux-Distributed-Monitor/Monitor/Monitor/src/monitor/cpu_load_monitor.cpp > CMakeFiles/monitor.dir/src/monitor/cpu_load_monitor.cpp.i

Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_load_monitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/monitor.dir/src/monitor/cpu_load_monitor.cpp.s"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snowk/repository/Linux-Distributed-Monitor/Monitor/Monitor/src/monitor/cpu_load_monitor.cpp -o CMakeFiles/monitor.dir/src/monitor/cpu_load_monitor.cpp.s

Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_softirq_monitor.cpp.o: Monitor/CMakeFiles/monitor.dir/flags.make
Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_softirq_monitor.cpp.o: ../Monitor/src/monitor/cpu_softirq_monitor.cpp
Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_softirq_monitor.cpp.o: Monitor/CMakeFiles/monitor.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_softirq_monitor.cpp.o"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_softirq_monitor.cpp.o -MF CMakeFiles/monitor.dir/src/monitor/cpu_softirq_monitor.cpp.o.d -o CMakeFiles/monitor.dir/src/monitor/cpu_softirq_monitor.cpp.o -c /home/snowk/repository/Linux-Distributed-Monitor/Monitor/Monitor/src/monitor/cpu_softirq_monitor.cpp

Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_softirq_monitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/monitor.dir/src/monitor/cpu_softirq_monitor.cpp.i"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snowk/repository/Linux-Distributed-Monitor/Monitor/Monitor/src/monitor/cpu_softirq_monitor.cpp > CMakeFiles/monitor.dir/src/monitor/cpu_softirq_monitor.cpp.i

Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_softirq_monitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/monitor.dir/src/monitor/cpu_softirq_monitor.cpp.s"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snowk/repository/Linux-Distributed-Monitor/Monitor/Monitor/src/monitor/cpu_softirq_monitor.cpp -o CMakeFiles/monitor.dir/src/monitor/cpu_softirq_monitor.cpp.s

Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_stat_monitor.cpp.o: Monitor/CMakeFiles/monitor.dir/flags.make
Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_stat_monitor.cpp.o: ../Monitor/src/monitor/cpu_stat_monitor.cpp
Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_stat_monitor.cpp.o: Monitor/CMakeFiles/monitor.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_stat_monitor.cpp.o"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_stat_monitor.cpp.o -MF CMakeFiles/monitor.dir/src/monitor/cpu_stat_monitor.cpp.o.d -o CMakeFiles/monitor.dir/src/monitor/cpu_stat_monitor.cpp.o -c /home/snowk/repository/Linux-Distributed-Monitor/Monitor/Monitor/src/monitor/cpu_stat_monitor.cpp

Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_stat_monitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/monitor.dir/src/monitor/cpu_stat_monitor.cpp.i"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snowk/repository/Linux-Distributed-Monitor/Monitor/Monitor/src/monitor/cpu_stat_monitor.cpp > CMakeFiles/monitor.dir/src/monitor/cpu_stat_monitor.cpp.i

Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_stat_monitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/monitor.dir/src/monitor/cpu_stat_monitor.cpp.s"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snowk/repository/Linux-Distributed-Monitor/Monitor/Monitor/src/monitor/cpu_stat_monitor.cpp -o CMakeFiles/monitor.dir/src/monitor/cpu_stat_monitor.cpp.s

Monitor/CMakeFiles/monitor.dir/src/monitor/mem_monitor.cpp.o: Monitor/CMakeFiles/monitor.dir/flags.make
Monitor/CMakeFiles/monitor.dir/src/monitor/mem_monitor.cpp.o: ../Monitor/src/monitor/mem_monitor.cpp
Monitor/CMakeFiles/monitor.dir/src/monitor/mem_monitor.cpp.o: Monitor/CMakeFiles/monitor.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object Monitor/CMakeFiles/monitor.dir/src/monitor/mem_monitor.cpp.o"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Monitor/CMakeFiles/monitor.dir/src/monitor/mem_monitor.cpp.o -MF CMakeFiles/monitor.dir/src/monitor/mem_monitor.cpp.o.d -o CMakeFiles/monitor.dir/src/monitor/mem_monitor.cpp.o -c /home/snowk/repository/Linux-Distributed-Monitor/Monitor/Monitor/src/monitor/mem_monitor.cpp

Monitor/CMakeFiles/monitor.dir/src/monitor/mem_monitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/monitor.dir/src/monitor/mem_monitor.cpp.i"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snowk/repository/Linux-Distributed-Monitor/Monitor/Monitor/src/monitor/mem_monitor.cpp > CMakeFiles/monitor.dir/src/monitor/mem_monitor.cpp.i

Monitor/CMakeFiles/monitor.dir/src/monitor/mem_monitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/monitor.dir/src/monitor/mem_monitor.cpp.s"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snowk/repository/Linux-Distributed-Monitor/Monitor/Monitor/src/monitor/mem_monitor.cpp -o CMakeFiles/monitor.dir/src/monitor/mem_monitor.cpp.s

Monitor/CMakeFiles/monitor.dir/src/monitor/net_monitor.cpp.o: Monitor/CMakeFiles/monitor.dir/flags.make
Monitor/CMakeFiles/monitor.dir/src/monitor/net_monitor.cpp.o: ../Monitor/src/monitor/net_monitor.cpp
Monitor/CMakeFiles/monitor.dir/src/monitor/net_monitor.cpp.o: Monitor/CMakeFiles/monitor.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object Monitor/CMakeFiles/monitor.dir/src/monitor/net_monitor.cpp.o"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Monitor/CMakeFiles/monitor.dir/src/monitor/net_monitor.cpp.o -MF CMakeFiles/monitor.dir/src/monitor/net_monitor.cpp.o.d -o CMakeFiles/monitor.dir/src/monitor/net_monitor.cpp.o -c /home/snowk/repository/Linux-Distributed-Monitor/Monitor/Monitor/src/monitor/net_monitor.cpp

Monitor/CMakeFiles/monitor.dir/src/monitor/net_monitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/monitor.dir/src/monitor/net_monitor.cpp.i"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snowk/repository/Linux-Distributed-Monitor/Monitor/Monitor/src/monitor/net_monitor.cpp > CMakeFiles/monitor.dir/src/monitor/net_monitor.cpp.i

Monitor/CMakeFiles/monitor.dir/src/monitor/net_monitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/monitor.dir/src/monitor/net_monitor.cpp.s"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snowk/repository/Linux-Distributed-Monitor/Monitor/Monitor/src/monitor/net_monitor.cpp -o CMakeFiles/monitor.dir/src/monitor/net_monitor.cpp.s

Monitor/CMakeFiles/monitor.dir/src/utils/utils.cpp.o: Monitor/CMakeFiles/monitor.dir/flags.make
Monitor/CMakeFiles/monitor.dir/src/utils/utils.cpp.o: ../Monitor/src/utils/utils.cpp
Monitor/CMakeFiles/monitor.dir/src/utils/utils.cpp.o: Monitor/CMakeFiles/monitor.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object Monitor/CMakeFiles/monitor.dir/src/utils/utils.cpp.o"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Monitor/CMakeFiles/monitor.dir/src/utils/utils.cpp.o -MF CMakeFiles/monitor.dir/src/utils/utils.cpp.o.d -o CMakeFiles/monitor.dir/src/utils/utils.cpp.o -c /home/snowk/repository/Linux-Distributed-Monitor/Monitor/Monitor/src/utils/utils.cpp

Monitor/CMakeFiles/monitor.dir/src/utils/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/monitor.dir/src/utils/utils.cpp.i"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snowk/repository/Linux-Distributed-Monitor/Monitor/Monitor/src/utils/utils.cpp > CMakeFiles/monitor.dir/src/utils/utils.cpp.i

Monitor/CMakeFiles/monitor.dir/src/utils/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/monitor.dir/src/utils/utils.cpp.s"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snowk/repository/Linux-Distributed-Monitor/Monitor/Monitor/src/utils/utils.cpp -o CMakeFiles/monitor.dir/src/utils/utils.cpp.s

# Object files for target monitor
monitor_OBJECTS = \
"CMakeFiles/monitor.dir/main.cpp.o" \
"CMakeFiles/monitor.dir/src/monitor/cpu_load_monitor.cpp.o" \
"CMakeFiles/monitor.dir/src/monitor/cpu_softirq_monitor.cpp.o" \
"CMakeFiles/monitor.dir/src/monitor/cpu_stat_monitor.cpp.o" \
"CMakeFiles/monitor.dir/src/monitor/mem_monitor.cpp.o" \
"CMakeFiles/monitor.dir/src/monitor/net_monitor.cpp.o" \
"CMakeFiles/monitor.dir/src/utils/utils.cpp.o"

# External object files for target monitor
monitor_EXTERNAL_OBJECTS =

Monitor/monitor: Monitor/CMakeFiles/monitor.dir/main.cpp.o
Monitor/monitor: Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_load_monitor.cpp.o
Monitor/monitor: Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_softirq_monitor.cpp.o
Monitor/monitor: Monitor/CMakeFiles/monitor.dir/src/monitor/cpu_stat_monitor.cpp.o
Monitor/monitor: Monitor/CMakeFiles/monitor.dir/src/monitor/mem_monitor.cpp.o
Monitor/monitor: Monitor/CMakeFiles/monitor.dir/src/monitor/net_monitor.cpp.o
Monitor/monitor: Monitor/CMakeFiles/monitor.dir/src/utils/utils.cpp.o
Monitor/monitor: Monitor/CMakeFiles/monitor.dir/build.make
Monitor/monitor: ProtoBuf/libmonitor_proto.a
Monitor/monitor: RPC/Client/libclient.a
Monitor/monitor: ProtoBuf/libmonitor_proto.a
Monitor/monitor: /usr/local/lib/libgrpc++.a
Monitor/monitor: /usr/local/lib/libprotobuf.a
Monitor/monitor: /usr/local/lib/libabsl_leak_check.a
Monitor/monitor: /usr/local/lib/libabsl_die_if_null.a
Monitor/monitor: /usr/local/lib/libabsl_log_initialize.a
Monitor/monitor: /usr/local/lib/libutf8_validity.a
Monitor/monitor: /usr/local/lib/libgrpc.a
Monitor/monitor: /usr/local/lib/libabsl_statusor.a
Monitor/monitor: /usr/local/lib/libupb_json_lib.a
Monitor/monitor: /usr/local/lib/libupb_textformat_lib.a
Monitor/monitor: /usr/local/lib/libutf8_range_lib.a
Monitor/monitor: /usr/local/lib/libupb_message_lib.a
Monitor/monitor: /usr/local/lib/libupb_base_lib.a
Monitor/monitor: /usr/local/lib/libupb_mem_lib.a
Monitor/monitor: /usr/local/lib/libre2.a
Monitor/monitor: /usr/local/lib/libz.a
Monitor/monitor: /usr/local/lib/libcares.a
Monitor/monitor: /usr/local/lib/libgpr.a
Monitor/monitor: /usr/local/lib/libabsl_flags_internal.a
Monitor/monitor: /usr/local/lib/libabsl_flags_reflection.a
Monitor/monitor: /usr/local/lib/libabsl_raw_hash_set.a
Monitor/monitor: /usr/local/lib/libabsl_hashtablez_sampler.a
Monitor/monitor: /usr/local/lib/libabsl_flags_config.a
Monitor/monitor: /usr/local/lib/libabsl_flags_program_name.a
Monitor/monitor: /usr/local/lib/libabsl_flags_private_handle_accessor.a
Monitor/monitor: /usr/local/lib/libabsl_flags_commandlineflag.a
Monitor/monitor: /usr/local/lib/libabsl_flags_commandlineflag_internal.a
Monitor/monitor: /usr/local/lib/libabsl_random_distributions.a
Monitor/monitor: /usr/local/lib/libabsl_random_seed_sequences.a
Monitor/monitor: /usr/local/lib/libabsl_random_internal_pool_urbg.a
Monitor/monitor: /usr/local/lib/libabsl_random_internal_randen.a
Monitor/monitor: /usr/local/lib/libabsl_random_internal_randen_hwaes.a
Monitor/monitor: /usr/local/lib/libabsl_random_internal_randen_hwaes_impl.a
Monitor/monitor: /usr/local/lib/libabsl_random_internal_randen_slow.a
Monitor/monitor: /usr/local/lib/libabsl_random_internal_platform.a
Monitor/monitor: /usr/local/lib/libabsl_random_internal_seed_material.a
Monitor/monitor: /usr/local/lib/libabsl_random_seed_gen_exception.a
Monitor/monitor: /usr/local/lib/libabsl_status.a
Monitor/monitor: /usr/local/lib/libabsl_cord.a
Monitor/monitor: /usr/local/lib/libabsl_cordz_info.a
Monitor/monitor: /usr/local/lib/libabsl_cord_internal.a
Monitor/monitor: /usr/local/lib/libabsl_cordz_functions.a
Monitor/monitor: /usr/local/lib/libabsl_exponential_biased.a
Monitor/monitor: /usr/local/lib/libabsl_cordz_handle.a
Monitor/monitor: /usr/local/lib/libabsl_crc_cord_state.a
Monitor/monitor: /usr/local/lib/libabsl_crc32c.a
Monitor/monitor: /usr/local/lib/libabsl_crc_internal.a
Monitor/monitor: /usr/local/lib/libabsl_crc_cpu_detect.a
Monitor/monitor: /usr/local/lib/libabsl_flags_marshalling.a
Monitor/monitor: /usr/local/lib/libssl.a
Monitor/monitor: /usr/local/lib/libcrypto.a
Monitor/monitor: /usr/local/lib/libaddress_sorting.a
Monitor/monitor: /usr/local/lib/libabsl_log_internal_check_op.a
Monitor/monitor: /usr/local/lib/libabsl_log_internal_conditions.a
Monitor/monitor: /usr/local/lib/libabsl_log_internal_message.a
Monitor/monitor: /usr/local/lib/libabsl_strerror.a
Monitor/monitor: /usr/local/lib/libabsl_log_internal_nullguard.a
Monitor/monitor: /usr/local/lib/libabsl_examine_stack.a
Monitor/monitor: /usr/local/lib/libabsl_log_internal_format.a
Monitor/monitor: /usr/local/lib/libabsl_str_format_internal.a
Monitor/monitor: /usr/local/lib/libabsl_log_internal_proto.a
Monitor/monitor: /usr/local/lib/libabsl_log_internal_log_sink_set.a
Monitor/monitor: /usr/local/lib/libabsl_log_globals.a
Monitor/monitor: /usr/local/lib/libabsl_hash.a
Monitor/monitor: /usr/local/lib/libabsl_bad_variant_access.a
Monitor/monitor: /usr/local/lib/libabsl_city.a
Monitor/monitor: /usr/local/lib/libabsl_low_level_hash.a
Monitor/monitor: /usr/local/lib/libabsl_log_internal_globals.a
Monitor/monitor: /usr/local/lib/libabsl_log_sink.a
Monitor/monitor: /usr/local/lib/libabsl_log_entry.a
Monitor/monitor: /usr/local/lib/libabsl_vlog_config_internal.a
Monitor/monitor: /usr/local/lib/libabsl_bad_optional_access.a
Monitor/monitor: /usr/local/lib/libabsl_synchronization.a
Monitor/monitor: /usr/local/lib/libabsl_stacktrace.a
Monitor/monitor: /usr/local/lib/libabsl_symbolize.a
Monitor/monitor: /usr/local/lib/libabsl_debugging_internal.a
Monitor/monitor: /usr/local/lib/libabsl_demangle_internal.a
Monitor/monitor: /usr/local/lib/libabsl_graphcycles_internal.a
Monitor/monitor: /usr/local/lib/libabsl_kernel_timeout_internal.a
Monitor/monitor: /usr/local/lib/libabsl_time.a
Monitor/monitor: /usr/local/lib/libabsl_civil_time.a
Monitor/monitor: /usr/local/lib/libabsl_time_zone.a
Monitor/monitor: /usr/local/lib/libabsl_malloc_internal.a
Monitor/monitor: /usr/local/lib/libabsl_log_internal_fnmatch.a
Monitor/monitor: /usr/local/lib/libabsl_strings.a
Monitor/monitor: /usr/local/lib/libabsl_int128.a
Monitor/monitor: /usr/local/lib/libabsl_strings_internal.a
Monitor/monitor: /usr/local/lib/libabsl_string_view.a
Monitor/monitor: /usr/local/lib/libabsl_base.a
Monitor/monitor: /usr/local/lib/libabsl_spinlock_wait.a
Monitor/monitor: /usr/local/lib/libabsl_throw_delegate.a
Monitor/monitor: /usr/local/lib/libabsl_raw_logging_internal.a
Monitor/monitor: /usr/local/lib/libabsl_log_severity.a
Monitor/monitor: Monitor/CMakeFiles/monitor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable monitor"
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/monitor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Monitor/CMakeFiles/monitor.dir/build: Monitor/monitor
.PHONY : Monitor/CMakeFiles/monitor.dir/build

Monitor/CMakeFiles/monitor.dir/clean:
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor && $(CMAKE_COMMAND) -P CMakeFiles/monitor.dir/cmake_clean.cmake
.PHONY : Monitor/CMakeFiles/monitor.dir/clean

Monitor/CMakeFiles/monitor.dir/depend:
	cd /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/snowk/repository/Linux-Distributed-Monitor/Monitor /home/snowk/repository/Linux-Distributed-Monitor/Monitor/Monitor /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor /home/snowk/repository/Linux-Distributed-Monitor/Monitor/build/Monitor/CMakeFiles/monitor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Monitor/CMakeFiles/monitor.dir/depend
