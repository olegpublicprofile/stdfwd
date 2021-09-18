# stdfwd

Forward declarations for C++ standard library.

This project was inspired
[Philip-Trettner/cpp-std-fwd](hhttps://github.com/Philip-Trettner/cpp-std-fwd).

Project *cpp-std-fwd* is as a proof-of-concept and last comment was Aug 25, 2019
so this project implemented all forward declarations for
C++99/C++03/C++11/C++14/C++17

## Table of Contents

* [Usage instead standard library](#usage-instead-standard-library)
* [Easy way to find class from standard library](#easy-way-to-find-class-from-standard-library)
* [Related repository](#related-repository)
* [Examples of usage](#examples-of-usage)
* [FAQ](#fqa)
* [TODO](#todo)

## Usage instead standard library

Just add *stdfwd* for standard header:

* Before:

```cpp
#include <string>
```

* After:

```cpp
#include <stdfwd/string>
```

For example:

* Old code:

```cpp
#include <string>

class Person
{
public:
    virtual std::string getName() const = 0;
};
```

* New code:

```cpp
#include <stdfwd/string>

class Person
{
public:
    virtual std::string getName() const = 0;
};
```

For some classes need change namespace *std* to *stdfwd* because they have
default template arguments, for example vector:

* Old code:

```cpp
#include <vector>

class Conference
{
public:
    virtual std::vector<Person> getParticipants() const = 0;
};
```

* New code:

```cpp
#include <stdfwd/vector>

class Conference
{
public:
    virtual stdfwd::vector<Person> getParticipants() const = 0;
};
```

[Back to top](#stdfwd)

## Easy way to find class from standard library

Standard headers have several classes so if you need only one class you include
all classes from the header. Since v0.3 version standard headers was splited to
headers that have only one class and name of headers is equal class name, for
example:

* Old code:

```cpp
#include <memory>

class Object
{
public:
    virtual std::shared_ptr<int> getSharedPtr() const = 0;
};
```

* New code:

```cpp
#include <stdfwd/shared_ptr>

class Object
{
public:
    virtual std::shared_ptr<int> getSharedPtr() const = 0;
};
```

In this example you include forward declaration only for `std::shared_ptr`

[Back to top](#stdfwd)

## Examples of usage

* [cppinclude](https://github.com/cppinclude/cppinclude)

[Back to top](#stdfwd)

## Related repository

* [Philip-Trettner/cpp-std-fwd](hhttps://github.com/Philip-Trettner/cpp-std-fwd)

[Back to top](#stdfwd)

## FAQ

* Why?

Each `std` header increases compiling time in case where forward
declaration will be enough

* Why the namespace `stdfwd`?

Some classes like `std::vector` have default template arguments
which must only appear on a declaration once.
If they appear on the definition then they cannot appear on
the forward declaration.
Thus, all forward declarations in `std` are without default
arguments and `stdfwd` adds typedefs with the appropriate defaults.

* Won't this be obsolete with modules?

Yes and no.
In C++20, `std` itself is not yet modularized.
Additionally, it is not clear if all code bases can be immediately
migrated to modules.
This `std` forward header is a small and easy-to-implement
non-intrusive change with big payoffs for many code bases.

* Isn't adding declarations to `std` undefined behavior?

Yes and no.
We have header *iosfwd* that contains forward declarations for
the Input/output library
and some compilers have own similar headers with forward declarations.
Plus the standard is expected to grow and if next C++ release will have
forward declarations this project can be useful for compilers that
doesn't support new standard

[Back to top](#stdfwd)

## TODO

* add forward declarations for C++20

[Back to top](#stdfwd)
