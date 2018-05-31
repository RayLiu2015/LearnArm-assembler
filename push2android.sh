#!/usr/bin/env sh

push_fn () {
EXE_DIR="data/local/tmp/"
EXE_PATH="./build/release/arm-v7a/build/*"
adb push ${EXE_PATH} ${EXE_DIR}
echo "test files sync completed"
}
push_fn

