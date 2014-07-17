# Snail.io

Snail.io is a library for slowing down I/O system calls on Mac OS X.

## Building
`make`

## Usage
```
env DYLD_INSERT_LIBRARIES=/path/to/libsnailio/lib/libsnailio.dylib DYLD_FORCE_FLAT_NAMESPACE=1 path/to/your.app/Contents/MacOS/app
```

## Thanks to
- Paul Guyot ([@pguyot](https://github.com/pguyot))

## License
Copyright © 2014 Ain Tohvri. Licensed under GPL.