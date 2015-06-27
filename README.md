<center><img src="http://www.wpclipart.com/time/stopwatch/running_stopwatch_shaded.png" width="100"></center>

# elapsed
A C++ timer to track how long an operation takes. Inspired by the ease of javascripts console.time()

## Installation

This is header only. Just drop the elapsed.hpp into your project.

## Usage

```C++
Elapsed e;
e.Start();

sleep(2);

e.End("Finished");
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
