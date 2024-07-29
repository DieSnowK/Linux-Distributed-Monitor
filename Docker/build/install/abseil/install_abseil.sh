#!/usr/bin/env bash

# Make sure that the script exits immediately when it encounters any errors
set -e

# Switch the current working directory to the directory where the script file is located
cd "$(dirname "${BASH_SOURCE[0]}")"

THREAD_NUM=$(nproc)
VERSION="20240116.2"
PKG_NAME="abseil-cpp-${VERSION}.tar.gz"

tar xzf "${PKG_NAME}"
pushd "abseil-cpp-${VERSION}"
    mkdir build && cd build
    cmake .. \
        -DBUILD_SHARED_LIBS=ON \
        -DCMAKE_CXX_STANDARD=14 \
        -DCMAKE_INSTALL_PREFIX=/usr/local
    make -j${THREAD_NUM}
    make install
popd

ldconfig

rm -rf "abseil-cpp-${VERSION}" "${PKG_NAME}"