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

RUN cmake -S . -B build -DCMAKE_BUILD_TYPE=Release \
    && cmake --build build -j$(nproc) \
    && cmake --install build --prefix /usr/local

# Runtime
FROM ubuntu:24.04

WORKDIR /app

COPY --from=build /usr/local/bin/mathix_app /usr/local/bin/mathix_app

CMD ["mathix_app"]

# docker build -t mathix_app .
# docker run --rm mathix_app