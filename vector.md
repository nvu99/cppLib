<h2>Vector</h2>

```#include "vector.h"```<br>
```class Vector<ValueType>```<br>
<p>This class is an enhanced version of the array. Supports insert/remove operations. Similar to the STL <b>vector</b> type.</p>

<h3>Constructor</h3>
<table>
<tr>
  <td>vector()</td>
  <td>O(1)</td>
  <td>Initializes a new empty vector. </td>
</tr>
</table>

<h3>Methods</h3>
<table>
<tr>
  <td>add(<b>value</b>)</td>
  <td>O(1)</td>
  <td>Adds a new value to the end of the vector.</td>
</tr>
<tr>
  <td>insert(<b>index</b>, <b>value</b>)</td>
  <td>O(N)</td>
  <td>Inserts the element before the specified index.</td>
</tr>
<tr>
  <td>remove(<b>index</b>)</td>
  <td>O(N)</td>
  <td>Removes the element at the specified index.</td>
</tr>
<tr>
  <td>set(<b>index</b>, <b>value</b>)</td>
  <td>O(1)</td>
  <td>Changes the value at the specified index to the specified value.</td>
</tr>
<tr>
  <td>get(<b>index</b>)</td>
  <td>O(1)</td>
  <td>Returns the value at the specified index.</td>
</tr>
<tr>
  <td>clear()</td>
  <td>O(1)</td>
  <td>Removes all elements from this vector.</td>
</tr>
<tr>
  <td>toString()</td>
  <td>O(N)</td>
  <td>Converts this vector into a printable representation.</td>
</tr>
<tr>
  <td>subList(<b>start</b>, <b>length</b>)</td>
  <td>O(N)</td>
  <td>Returns a new vector containing the elements of the given sub-range.</td>
</tr>
<tr>
  <td>contains(<b>value</b>)</td>
  <td>O(N)</td>
  <td>Returns <b>true</b> if this vector contains the specified value.</td>
</tr>
<tr>
  <td>isEmpty()</td>
  <td>O(1)</td>
  <td>Returns <b>true</b> if this vector contains no elements.
</tr>
<tr>
  <td>size()</td>
  <td>O(1)</td>
  <td>Returns the number of elements in this vector.</td>
</tr>
</table>
<h3>Operators</h3>
<table>
<tr>
  <td>vector[index]</td>
  <td>O(1)</td>
  <td>Selects the element at the specified index.</td>
</tr>
<tr>
  <td>vector1 + vector2</td>
  <td>O(N)</td>
  <td>Concatinates the two vectors.</td>
</tr>
<tr>
  <td>vector += value</td>
  <td>O(1)</td>
  <td>Calls add() on this vector for the given value.</td>
</tr>
<tr>
  <td>vector1 == vector2</td>
  <td>O(N)</td>
  <td>Returns <b>true</b> if <b>vector1</b> and <b>vector2</b> are identical.</td>
</tr>
<tr>
  <td>vector1 != vector2</td>
  <td>O(N)</td>
  <td>Returns <b>true</b> if <b>vector1</b> and <b>vector2</b> are different.</b>
</tr>
<tr>
  <td>ostream << vector</td>
  <td>O(N)</td>
  <td>Outputs the contents of the vector to the given output stream.</td>
</tr>
<tr>
  <td>istream >> vector</td>
  <td>O(1)</td>
  <td>Reads the value from the input stream into the vector.</td>
</tr>
</table>

<h3>Constructor detail</h3>
Call ```vector<ValueType> vector;```<br>
e.g. ```vector<string> vector;```

<h3>Method detail</h3>
<h4>void add(ValueType value);</h4>
Adds a new value to the end of the vector<br>
Usage: ```vector.add(value);```
<h4>void insert(int index, ValueType value);</h4>
Inserts an element before the specified index.<br>
Usage: ```vector.insert(3, "dog");```
<h4>void remove(int index);</h4>
Removes the element at the specified index.<br>
Usage: ```vector.remove(2);```
<h4>void set(int index, ValueType value)</h4>
Changes the value at the specified index to the specified value.<br>
Usage: ```vector.set(2, "cat");```
<h4>ValueType get(int index)</h4>
Returns the value at the specified index.<br>
Usage: ```vector.get(0);```
<h4>void clear();</h4>
Removes all elements from this vector.<br>
Usage: ```vector.clear();```
<h4>string toString();</h4>
Returns a printable string representation of the vector.
Usage: ```vector.toString();```
<h4>Vector<ValueType> subList(int start, int length);</h4>
Returns a new vector containing the elements of the given sub-range.<br>
Usage: ```vector.subList(2, 3);```
<h4>bool contains(value);</h4>
Returns <b>true</b> if this vector contains the given value.<br>
Usage: ```vector.contains("dog");```
<h4>bool isEmpty();</h4>
Returns <b>true</b> if this vector contains no elements.<br>
Usage: ```vector.isEmpty();```
<h4>int size();</h4>
Returns the number of elements in this vector<br>
Usage: ```vector.size();```
