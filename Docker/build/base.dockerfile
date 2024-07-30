FROM  ubuntu:18.04

# Non-interactive mode --> Automate builds
ARG DEBIAN_FRONTEND=noninteractive
ENV TZ=Asia/Shanghai

SHELL ["/bin/bash", "-c"]

# RUN apt-get clean && \
#     apt-get autoclean
# COPY apt/sources.list /etc/apt/

RUN apt-get update && apt-get upgrade -y  && \
    apt-get install -y \
    htop \
    apt-utils \
    curl \
    git \
    openssh-server \
    build-essential \
    qtbase5-dev \
    qtchooser \
    qt5-qmake \
    qtbase5-dev-tools \
    libstdc++-8-dev \
    libboost-all-dev \
    net-tools \
    vim \
    stress

RUN apt-get install -y \
    libc-ares-dev \
    libssl-dev \
    gcc \
    g++-8 \
    make 

RUN apt-get install -y  \
    libx11-xcb1 \
    libfreetype6 \
    libdbus-1-3 \
    libfontconfig1 \
    libxkbcommon0   \
    libxkbcommon-x11-0

# Set g++-8 as the default compiler
RUN update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-8 100

COPY install/cmake /tmp/install/cmake
RUN /tmp/install/cmake/install_cmake.sh

COPY install/abseil /tmp/install/abseil
RUN /tmp/install/abseil/install_abseil.sh

COPY install/re2 /tmp/install/re2
RUN /tmp/install/re2/install_re2.sh

COPY install/protobuf /tmp/install/protobuf
RUN /tmp/install/protobuf/install_protobuf.sh

COPY install/grpc /tmp/install/grpc
RUN /tmp/install/grpc/install_grpc.sh