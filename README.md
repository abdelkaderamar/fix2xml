# FIX2XML

<p align="center">
<a href="https://travis-ci.org/abdelkaderamar/fix2xml">
<img src='https://travis-ci.org/abdelkaderamar/fix2xml.svg?branch=master' alt="Travis CI" /></a>
<a href='https://coveralls.io/github/abdelkaderamar/fix2xml?branch=master'><img src='https://coveralls.io/repos/github/abdelkaderamar/fix2xml/badge.svg?branch=master' alt='Coverage Status' /></a>
</p>

<p align="center">
<a href="#key-features">Key Features</a>
<a href="#how-to-use">How To Use</a>
<a href="#compilation">Compilation</a>
<a href="#credit">Credit</a>
<a href="#license">License</a>
</p>

## Key Features
- Convert C++ quickfix messages to FIXML
- Convert a FIXML messages to a C++ quickfix messages

## How To Use

The code below shows how to convert a C++ quickfix message to its FIXML representation.
```cpp
  fixml2fix_converter converter (fix_filename, xsd_schema);
  NewOrderSingle fix_message;
  // set FIX messages fields
  // ...
  // ...
  converter.fix2fixml(fix_message, str);
```

The conversion from a FIXML message to its equivalent C++ quickfix message can be done using the same converter type `fixml2fix_converter`

```cpp
  string str =
    "    <Order ID='ClOrdID_123'>"
    "    <Pty ID='partyid_111'>"
    "    </Pty>"
    "    <Instrmt Sym='Symbol_234'>"
    "    </Instrmt>"
    "    </Order>"
    ;
  FIX::Message fix_msg;
  converter.fixml2fix(str, fix_msg);
```
## Compilation

## Credit
- [gcc](https://gcc.gnu.org/)
- [boost](https://www.boost.org/)
- [Apache Xerces-C++](http://xerces.apache.org/xerces-c/)
- [Cmake](https://cmake.org/)
- [Google Test](https://github.com/google/googletest)

## License
MIT
