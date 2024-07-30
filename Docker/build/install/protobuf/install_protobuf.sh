#!/usr/bin/env bash

set -e

cd "$(dirname "${BASH_SOURCE[0]}")"

THREAD_NUM=$(nproc)
VERSION="27.2"
PKG_NAME="protobuf-${VERSION}.tar.gz"

tar xzf "${PKG_NAME}"
pushd protobuf-${VERSION}
    mkdir build && cd build
    cmake .. \
        -DBUILD_SHARED_LIBS=ON \
        -Dprotobuf_BUILD_TESTS=OFF \
        -DCMAKE_BUILD_TYPE=Release \
        -DCMAKE_INSTALL_PREFIX:PATH="/usr/local" \
        -Dprotobuf_ABSL_PROVIDER=package \
        -DCMAKE_PREFIX_PATH="/usr/local"
    make -j$(nproc)
    make install
popd

ldconfig

rm -rf "${PKG_NAME}" "protobuf-${VERSION}"