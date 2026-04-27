CC = gcc
CFLAGS = -Wall -Wextra -I.

# Library
LIBSRC = libkr.c
LIBOBJ = $(LIBSRC:.c=.o)

# Test sources and binaries (kept inside tests/)
TEST_SRCS = $(wildcard tests/*_test.c)
TEST_BINS = $(patsubst tests/%.c, tests/%, $(TEST_SRCS))

# Default target
all: $(TEST_BINS)

# Build library object
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Build each test binary inside tests/
tests/%: tests/%.c $(LIBOBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Run all test scripts from within tests/
run_all: all
	@for script in tests/run_*.sh; do \
		echo "---- $$script ----"; \
		( cd tests && bash $$(basename $$script) ); \
	done

# Clean everything
clean:
	rm -f $(TEST_BINS) $(LIBOBJ)
