#!/usr/bin/env bash

set -e

cd "$(dirname "${BASH_SOURCE[0]}")"

THREAD_NUM=$(nproc)
VERSION="1.65.2"
PKG_NAME="grpc-${VERSION}.tar.gz"

tar xzf "${PKG_NAME}"
pushd grpc-${VERSION}
    mkdir build && cd build
    cmake ..    -DgRPC_INSTALL=ON                \
                -DBUILD_SHARED_LIBS=ON           \
                -DCMAKE_BUILD_TYPE=Release       \
                -DgRPC_ABSL_PROVIDER=package     \
                -DgRPC_CARES_PROVIDER=package    \
                -DgRPC_PROTOBUF_PROVIDER=package \
                -DgRPC_RE2_PROVIDER=package      \
                -DgRPC_SSL_PROVIDER=package      \
                -DgRPC_ZLIB_PROVIDER=package     \
                -DCMAKE_INSTALL_PREFIX=/usr/local/
    make -j${THREAD_NUM}
    make install
popd

ldconfig

rm -rf "${PKG_NAME}" "grpc-${VERSION}"