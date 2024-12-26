# Build and run C++ tests
cpp:
    #!/usr/bin/env bash
    set -euxo pipefail
    cd C++
    make
    make run-tests

# Run JavaScript tests
javascript:
    #!/usr/bin/env bash
    cd JavaScript
    if [[ ! -d "node_modules" ]]; then
        npm install
    fi
    npm run test
