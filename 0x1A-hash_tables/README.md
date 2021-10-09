 <h1 class="gap">0x1A. C - Hash tables</h1>
 <div class="gap" id="project-description">
  <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/uodWZz-2jyHReOeToaLNdQ" title="What is a HashTable Data Structure - Introduction to Hash Tables , Part 0" target="_blank">What is a HashTable Data Structure - Introduction to Hash Tables , Part 0</a> </li>
<li><a href="/rltoken/YiFi_oMjd9cZ4VepsS2RKQ" title="Hash function" target="_blank">Hash function</a> </li>
<li><a href="/rltoken/Kswyyb1f2JY3dn-3TEckUQ" title="Hash table" target="_blank">Hash table</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/eHnGDm4LX8ziS2poyh3lQA" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is a hash function</li>
<li>What makes a good hash function</li>
<li>What is a hash table, how do they work and how to use them</li>
<li>What is a collision and what are the main ways of dealing with collisions in the context of a hash table</li>
<li>What are the advantages and drawbacks of using hash tables</li>
<li>What are the most common use cases of hash tables</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are allowed to use the C standard library</li>
<li>The prototypes of all your functions should be included in your header file called <code>hash_tables.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>

<h2>More Info</h2>

<h3>Data Structures</h3>

<p>Please use these data structures for this project:</p>

<pre><code>/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
</code></pre>
