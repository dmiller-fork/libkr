#!/bin/bash
# tests/run_typesort.sh

echo -e "world\nhello" | ./typesort_test

echo -e "2\n1" | ./typesort_test -n
