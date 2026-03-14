#!/bin/bash

if [ $# -ne 2 ]; then
    echo "wrong number of arguments provided"
    exit 1
fi

dir_name=$(dirname "$1")
if [ ! -d "$dir_name" ]; then
    mkdir -p "$dir_name"
fi

touch "$1" || {
  echo "file could not be created"
  exit 1
}

echo "$2" > "$1"

