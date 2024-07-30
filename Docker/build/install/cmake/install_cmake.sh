#!/usr/bin/env bash

set -e

cd "$(dirname "${BASH_SOURCE[0]}")"

THREAD_NUM=$(nproc)
VERSION="3.30.1"
PKG_NAME="cmake-${VERSION}.tar.gz"

tar xzf "${PKG_NAME}"
pushd cmake-${VERSION}
    # ./configure --prefix=/usr/local/
    ./bootstrap --prefix=/usr/local/
    make -j${THREAD_NUM}
    make install
popd

rm -rf PKG_NAME cmake-${VERSION}