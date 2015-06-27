# Elapsed
A C++ timer to track how long an operation takes. Inspired by the ease of javascripts console.time()

## Installation

C++11 is required.
This is header only. Just drop the *elapsed.hpp* into your project.

## Usage

```C++
#include <elapsed.hpp>

Elapsed e;
e.Start();

sleep(2);

double t = e.End("Finished");
// --> "Finished (2000 ms)"
```

This would print out "Finished (2000 ms)" onto stdout.

You can also use the returned value in your code

```C++

...
double t = e.End("My measured operations");

```

Or without any stdout output

```C++
double t = e.End();
```
