FROM mcr.microsoft.com/devcontainers/cpp:0-debian-11

ARG REINSTALL_CMAKE_VERSION_FROM_SOURCE="none"

# Optionally install the cmake for vcpkg
COPY ./reinstall-cmake.sh /tmp/

RUN if [ "${REINSTALL_CMAKE_VERSION_FROM_SOURCE}" != "none" ]; then \
        chmod +x /tmp/reinstall-cmake.sh && /tmp/reinstall-cmake.sh ${REINSTALL_CMAKE_VERSION_FROM_SOURCE}; \
    fi \
    && rm -f /tmp/reinstall-cmake.sh

# [Optional] Uncomment this section to install additional vcpkg ports.
# RUN su vscode -c "${VCPKG_ROOT}/vcpkg install <your-port-name-here>"

# [Optional] Uncomment this section to install additional packages.
# RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
#     && apt-get -y install --no-install-recommends <your-package-list-here>

# Install online-judge-tools (Reference: https://qiita.com/RubyLrving/items/67caa8e95d4799bb0be6)
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends \
    python3-pip \
    pypy3 \
    nodejs \
    npm \
    && pip3 install online-judge-tools \
    && npm install -g atcoder-cli \
    && rm -rf /var/lib/apt/lists/* \
    && rm -rf ~/.cache/pip \
    && npm cache clean --force

RUN acc config default-test-dirname-format test \
    && acc config default-template cpp \
    && acc config default-task-choice all
