all: build/lib/libgnuradio-cfeyer_dwf_module.so

build/lib/libgnuradio-cfeyer_dwf_module.so: build/Makefile
	make -C build

build/Makefile: build
	cd build; cmake ../gr-cfeyer_dwf_module

build:
	mkdir build

.PHONY: clean

clean:
	rm -rf build
