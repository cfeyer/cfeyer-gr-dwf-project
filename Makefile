all: build/lib/libgnuradio-cfeyer_dwf_module.so

build/lib/libgnuradio-cfeyer_dwf_module.so: build/Makefile
	make -C build

build/Makefile: build
	cd build; cmake ../gr-cfeyer_dwf_module

build:
	mkdir build

.PHONY: clean install

clean:
	rm -rf build

install: all
	make -C build install
