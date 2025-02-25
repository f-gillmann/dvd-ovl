export GITHASH			:= $(shell git rev-parse --short HEAD)
export VERSION			:= 1.0.0

all: overlay

clean:
		$(MAKE) -C overlay clean
		-rm -r dist
		-rm dvd-ovl-*.*.zip

overlay:
		$(MAKE) -C overlay

dist: overlay
		mkdir -p dist/switch/.overlays
		cp overlay/dvd-overlay.ovl dist/switch/.overlays/
		cd dist; zip -r dvd-ovl-$(VERSION)-$(GITHASH).zip ./**/; cd ../;

echo-version:
		@echo $(VERSION)

echo-githash:
		@echo $(GITHASH)

.PHONY: all overlay