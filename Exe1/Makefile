## Credits to Shifaa and Wasim
## Wasimshebalny@gmail.com
## Shifaakhatib28@gmail.com
## this is an iterative Makefile which runs the Makefile in each directory.

# List of subdirectories
#SUBDIRS = Q1 Q2 Q3 Q4 Q5 Q6

# Default target
#all: $(SUBDIRS)

# Rule to build each subdirectory
#$(SUBDIRS):
#	$(MAKE) -C $@

# Clean target for each subdirectory
#.PHONY: clean $(SUBDIRS)
#clean:
#	@for dir in $(SUBDIRS); do \
#		$(MAKE) -C $$dir clean; \
#	done

## now we'll have a recursive implementation of this Makefile

# List of subdirectories
SUBDIRS = exe1 exe2 exe3 exe4 exe5 exe6

# Default target
all: $(SUBDIRS)

# Rule to build each subdirectory
$(SUBDIRS):
	$(MAKE) -C $@

# Recursive call to build all subdirectories
exe1:
	$(MAKE) -C exe1

exe2:
	$(MAKE) -C exe2

exe3:
	$(MAKE) -C exe3

exe4:
	$(MAKE) -C exe4

exe5:
	$(MAKE) -C exe5

exe6:
	$(MAKE) -C exe6

# Clean target for each subdirectory
.PHONY: clean $(SUBDIRS)
clean:
	@for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done
