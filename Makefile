all: build/Makefile

build/Makefile: build
	cd build; cmake ../gr-cfeyer_dwf_module

build:
	mkdir build

.PHONY: clean

clean:
	rm -rf build
