#!/usr/bin/env bash

set -e

cd "$(dirname "${BASH_SOURCE[0]}")"

THREAD_NUM=$(nproc)
VERSION="2024-07-02"
PKG_NAME="re2-${VERSION}.tar.gz"

tar xzf "${PKG_NAME}"
pushd re2-${VERSION}
    mkdir build && cd build
    cmake ..    -DBUILD_SHARED_LIBS=ON           \
                -DCMAKE_BUILD_TYPE=Release       \
                -DCMAKE_INSTALL_PREFIX=/usr/local/
    make -j${THREAD_NUM}
    make install
popd

ldconfig

rm -rf "${PKG_NAME}" "re2-${VERSION}"