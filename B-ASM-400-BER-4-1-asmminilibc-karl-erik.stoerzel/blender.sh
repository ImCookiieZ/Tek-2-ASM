#! /bin/bash

test_passed=0
test_failed=0

echo "Build\n"
make
if [ $? != 0 ]; then
    echo -e "build test:\tFAILED\n";
else {
    echo -e "build test:\tPASSED"
    test_passed++
}
     echo "----------------------"
fi

