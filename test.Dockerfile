# Build
FROM ubuntu:24.04 AS build

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y --no-install-recommends \
    build-essential \
    cmake \
    nasm \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /app

COPY . .

RUN cmake -S . -B build -DBUILD_TESTS=ON \
    && cmake --build build -j$(nproc) \
    && cmake --install build --prefix /usr/local

# Runtime
FROM ubuntu:24.04

WORKDIR /app

COPY --from=build /usr/local/bin/mathix_tests /usr/local/bin/mathix_tests

CMD ["mathix_tests"]

# docker build -f test.Dockerfile -t mathix_tests .
# docker run --rm mathix_tests