# stdfwd

Forward declarations for C++ standard library.

This project was inspired
[Philip-Trettner/cpp-std-fwd](hhttps://github.com/Philip-Trettner/cpp-std-fwd).

Project *cpp-std-fwd* is as a proof-of-concept and last comment was Aug 25, 2019
so this project implemented all forward declarations for
C++99/C++03/C++11/C++14/C++17

## Usage

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
  
## Related repository

* https://github.com/Philip-Trettner/cpp-std-fwd

## TODO

* add forward declarations for C++20
