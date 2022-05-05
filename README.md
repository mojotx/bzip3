
# BZip3

A better and stronger spiritual successor to BZip2. Features higher compression ratios and better performance thanks to a order-0 context mixing entropy coder and fast Burrows-Wheeler transform code making use of suffix arrays.

No stability guarantees yet.

## Installation

```
make all && sudo make install
```

To set the installation directory, use e.g. `sudo make install PREFIX=/usr`.

BZip3 depends on POSIX APIs and the `libc`. All other dependencies (e.g. `libsais`) have been bundled into the source code trunk.


## TODO

- Avoid a memory copy in `bz3_encode_block`/`bz3_decode_block`.
- "Extreme" preset which automatically picks the best options at the expense of the runtime.
- Further performance optimisations.
- Thorough memory safety testing.
