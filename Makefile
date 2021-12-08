LIBC=bin/libc.a
BUILD=_build

ARRAY=array-cav19 array-crafted array-examples array-fpi array-industry-pattern array-lopstr16 array-multidimensional array-patterns array-programs array-tiling
BITVECTOR=bitvector bitvector-loops bitvector-regression
CONTROL_FLOW=ntdrivers-simplified openssl openssl-simplified locks ntdrivers
ECA=eca-programs eca-rers2012 eca-rers2018
FLOATS=float-benchs float-newlib floats-cdfpl floats-cbmc-regression floats-esbmc-regression loop-floats-scientific-comp
HEAP=forester-heap heap-data list-simple list-properties list-ext-properties list-ext2-properties list-ext3-properties ldv-sets ldv-regression heap-manipulation
LOOPS=loop-crafted loop-industry-pattern loop-invariants loop-invgen loop-lit loop-new loop-simple loop-zilu verifythis nla-digbench nla-digbench-scaling loops loops-crafted-1 loop-acceleration
RECURSIVE=recursive recursive-simple recursive-with-pointer
SEQUENTIALIZED=systemc seq-mthreaded seq-pthread
XCSP=xcsp
COMBINATIONS=combinations
ARRAY_MEMSAFETY=array-memsafety array-memsafety-realloc
HEAP_MEMSAFETY=memsafety memsafety-bftpd memsafety-ext memsafety-ext2
TERMINATION_CONTROLFLOW=termination-crafted termination-crafted-lit termination-numeric reducercommutativity
MAIN_HEAP=termination-dietlibc termination-memory-alloca termination-memory-linkedlists termination-15 termination-recursive-malloc

TARGET=$(ARRAY) $(BITVECTOR) $(CONTROL_FLOW) $(ECA) $(FLOATS) $(HEAP) $(LOOPS) $(RECURSIVE) $(SEQUENTIALIZED) $(XCSP) $(COMBINATIONS) $(ARRAY_MEMSAFETY) $(HEAP_MEMSAFETY) $(TERMINATION_CONTROLFLOW) $(MAIN_HEAP)

THREADS ?= 1

.PHONY: clean

default: comp

comp: $(TARGET)

all: build $(TARGET)

$(TARGET):
	mkdir -p $(BUILD)
	$(MAKE) -C for-wasp/$@ -j$(THREADS)

build:
	@rm -v -rf for-wasp
	@cp -v -R original for-wasp
	@python3 ./scripts/for_wasp.py $(THREADS)

run:
	@python3 -m validator $(THREADS)

clean:
	$(RM) -rf $(BUILD) $(LIBC)
