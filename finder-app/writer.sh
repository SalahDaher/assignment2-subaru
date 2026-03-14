#!/bin/sh

if [ $# -ne 2 ]; then
    echo "wrong number of arguments provided"
    exit 1
fi

touch "$1" || {
  echo "file could not be created"
  exit 1
}

echo "$2" > "$1"

