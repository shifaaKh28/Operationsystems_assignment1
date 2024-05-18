# Credits to Shifaa and Wasim
# Wasimshebalny@gmail.com
# Shifaakhatib28@gmail.com
# this is an iterative Makefile which runs the Makefile in each directory.

# List of subdirectories
SUBDIRS = Q1 Q2 Q3 Q4 Q5 Q6

# Default target
all: $(SUBDIRS)

# Rule to build each subdirectory
$(SUBDIRS):
	$(MAKE) -C $@

# Clean target for each subdirectory
.PHONY: clean $(SUBDIRS)
clean:
	@for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done
