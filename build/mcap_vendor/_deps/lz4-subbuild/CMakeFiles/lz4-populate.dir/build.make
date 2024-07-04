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
CMAKE_SOURCE_DIR = /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild

# Utility rule file for lz4-populate.

# Include any custom commands dependencies for this target.
include CMakeFiles/lz4-populate.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lz4-populate.dir/progress.make

CMakeFiles/lz4-populate: CMakeFiles/lz4-populate-complete

CMakeFiles/lz4-populate-complete: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-install
CMakeFiles/lz4-populate-complete: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-mkdir
CMakeFiles/lz4-populate-complete: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-download
CMakeFiles/lz4-populate-complete: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-update
CMakeFiles/lz4-populate-complete: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-patch
CMakeFiles/lz4-populate-complete: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-configure
CMakeFiles/lz4-populate-complete: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-build
CMakeFiles/lz4-populate-complete: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-install
CMakeFiles/lz4-populate-complete: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-test
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'lz4-populate'"
	/usr/bin/cmake -E make_directory /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/CMakeFiles
	/usr/bin/cmake -E touch /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/CMakeFiles/lz4-populate-complete
	/usr/bin/cmake -E touch /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-done

lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-update:
.PHONY : lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-update

lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-build: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No build step for 'lz4-populate'"
	cd /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-build && /usr/bin/cmake -E echo_append
	cd /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-build && /usr/bin/cmake -E touch /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-build

lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-configure: lz4-populate-prefix/tmp/lz4-populate-cfgcmd.txt
lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-configure: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "No configure step for 'lz4-populate'"
	cd /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-build && /usr/bin/cmake -E echo_append
	cd /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-build && /usr/bin/cmake -E touch /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-configure

lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-download: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-gitinfo.txt
lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-download: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'lz4-populate'"
	cd /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps && /usr/bin/cmake -P /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/lz4-populate-prefix/tmp/lz4-populate-gitclone.cmake
	cd /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps && /usr/bin/cmake -E touch /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-download

lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-install: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No install step for 'lz4-populate'"
	cd /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-build && /usr/bin/cmake -E echo_append
	cd /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-build && /usr/bin/cmake -E touch /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-install

lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'lz4-populate'"
	/usr/bin/cmake -E make_directory /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-src
	/usr/bin/cmake -E make_directory /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-build
	/usr/bin/cmake -E make_directory /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/lz4-populate-prefix
	/usr/bin/cmake -E make_directory /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/lz4-populate-prefix/tmp
	/usr/bin/cmake -E make_directory /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/lz4-populate-prefix/src/lz4-populate-stamp
	/usr/bin/cmake -E make_directory /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/lz4-populate-prefix/src
	/usr/bin/cmake -E make_directory /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/lz4-populate-prefix/src/lz4-populate-stamp
	/usr/bin/cmake -E touch /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-mkdir

lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-patch: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-update
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'lz4-populate'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-patch

lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-update:
.PHONY : lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-update

lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-test: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No test step for 'lz4-populate'"
	cd /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-build && /usr/bin/cmake -E echo_append
	cd /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-build && /usr/bin/cmake -E touch /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-test

lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-update: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Performing update step for 'lz4-populate'"
	cd /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-src && /usr/bin/cmake -P /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/lz4-populate-prefix/tmp/lz4-populate-gitupdate.cmake

lz4-populate: CMakeFiles/lz4-populate
lz4-populate: CMakeFiles/lz4-populate-complete
lz4-populate: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-build
lz4-populate: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-configure
lz4-populate: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-download
lz4-populate: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-install
lz4-populate: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-mkdir
lz4-populate: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-patch
lz4-populate: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-test
lz4-populate: lz4-populate-prefix/src/lz4-populate-stamp/lz4-populate-update
lz4-populate: CMakeFiles/lz4-populate.dir/build.make
.PHONY : lz4-populate

# Rule to build all files generated by this target.
CMakeFiles/lz4-populate.dir/build: lz4-populate
.PHONY : CMakeFiles/lz4-populate.dir/build

CMakeFiles/lz4-populate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lz4-populate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lz4-populate.dir/clean

CMakeFiles/lz4-populate.dir/depend:
	cd /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild /home/jj/wearable-biosensors-ros2/build/mcap_vendor/_deps/lz4-subbuild/CMakeFiles/lz4-populate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lz4-populate.dir/depend

