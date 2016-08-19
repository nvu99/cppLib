<h2>LinkedList</h2>

```#include "linkedlist.h"```<br>
```class LinkedList<ValueType>```<br>
<p>This class acts similarly to an array. Supports insert/remove operations. Very efficient when performing operations closer to the front of the list. Similar to the STL <b>list</b> type.</p>

<h3>Constructor</h3>
<table>
<tr>
  <td>LinkedList()</td>
  <td>O(1)</td>
  <td>Initializes a new empty LinkedList. </td>
</tr>
</table>

<h3>Methods</h3>
<table>
<tr>
  <td>add(<b>value</b>)</td>
  <td>O(1)</td>
  <td>Adds a new value to the end of the list.</td>
</tr>
<tr>
  <td>insert(<b>index</b>, <b>value</b>)</td>
  <td>O(N)</td>
  <td>Inserts an element before the specified index.</td>
</tr>
<tr>
  <td>remove(<b>index</b>)</td>
  <td>O(N)</td>
  <td>Removes the element at the specified index.</td>
</tr>
<tr>
  <td>set(<b>index</b>, <b>value</b>)</td>
  <td>O(N)</td>
  <td>Changes the value at the specified index to the specified value.</td>
</tr>
<tr>
  <td>get(<b>index</b>)</td>
  <td>O(N)</td>
  <td>Returns the value at the specified index.</td>
</tr>
<tr>
  <td>clear()</td>
  <td>O(N)</td>
  <td>Removes all elements from this list.</td>
</tr>
<tr>
  <td>toString()</td>
  <td>O(N)</td>
  <td>Converts this list into a printable representation.</td>
</tr>
<tr>
  <td>subList(<b>start</b>, <b>length</b>)</td>
  <td>O(N)</td>
  <td>Returns a new list containing the elements of the given sub-range.</td>
</tr>
<tr>
  <td>contains(<b>value</b>)</td>
  <td>O(N)</td>
  <td>Returns <b>true</b> if this list contains the specified value.</td>
</tr>
<tr>
  <td>isEmpty()</td>
  <td>O(1)</td>
  <td>Returns <b>true</b> if this list contains no elements.
</tr>
<tr>
  <td>size()</td>
  <td>O(1)</td>
  <td>Returns the number of elements in this list.</td>
</tr>
</table>
<h3>Operators</h3>
<table>
<tr>
  <td>list[index]</td>
  <td>O(N)</td>
  <td>Selects the element at the specified index.</td>
</tr>
<tr>
  <td>list1 + list2</td>
  <td>O(N)</td>
  <td>Concatinates the two lists.</td>
</tr>
<tr>
  <td>list += value</td>
  <td>O(1)</td>
  <td>Calls add() on this list for the given value.</td>
</tr>
<tr>
  <td>list1 == list2</td>
  <td>O(N)</td>
  <td>Returns <b>true</b> if <b>list1</b> and <b>list2</b> are identical.</td>
</tr>
<tr>
  <td>list1 != list2</td>
  <td>O(N)</td>
  <td>Returns <b>true</b> if <b>list1</b> and <b>list2</b> are different.</b>
</tr>
<tr>
  <td>ostream& << list</td>
  <td>O(N)</td>
  <td>Outputs the contents of the list to the given output stream.</td>
</tr>
<tr>
  <td>istream& >> list</td>
  <td>O(1)</td>
  <td>Reads the value from the input stream into the list.</td>
</tr>
</table>

<h3>Constructor detail</h3>
Call ```LinkedList<ValueType> list;```<br>
e.g. ```LinkedList<string> stringList;```

<h3>Method detail</h3>
<h4>void add(ValueType value);</h4>
Adds a new value to the end of the list.<br>
Usage: ```list.add(value);```
<h4>void insert(int index, ValueType value);</h4>
Inserts an element before the specified index. O(1) front/end of list.<br>
Usage: ```list.insert(3, "dog");```
<h4>void remove(int index);</h4>
Removes the element at the specified index. To be improved for Big-Oh runtime.<br>
Usage: ```list.remove(2);```
<h4>void set(int index, ValueType value);</h4>
Changes the value at the specified index to the specified value. O(1) front/end of list.<br>
Usage: ```list.set(2, "cat");```
<h4>ValueType get(int index);</h4>
Returns the value at the specified index. O(1) front/end of list.<br>
Usage: ```ValueType val = list.get(0);```
<h4>void clear();</h4>
Removes all elements from this list.<br>
Usage: ```list.clear();```
<h4>string toString();</h4>
Returns a printable string representation of the list.<br>
Usage: ```string s = list.toString();``` or ```cout << list.toString();```
<h4>LinkedList<ValueType> subList(int start, int length);</h4>
Returns a new list containing the elements of the given sub-range.<br>
Usage: ```list.subList(2, 3);```
<h4>bool contains(value);</h4>
Returns <b>true</b> if this list contains the given value.<br>
Usage: ```list.contains("dog");```
<h4>bool isEmpty();</h4>
Returns <b>true</b> if this list contains no elements.<br>
Usage: ```list.isEmpty();```
<h4>int size();</h4>
Returns the number of elements in this list.<br>
Usage: ```int n = list.size();```