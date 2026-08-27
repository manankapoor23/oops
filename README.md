# OOPS

Coursework and lab practice for an Object-Oriented Programming in C++ course
(UTA018). This is a personal collection of assignment solutions, mid-semester
test (MST) practice, and one-off exercises written while learning the
material — not a polished library or a single application.

## What's implemented

| Topic | Where |
|---|---|
| Classes, constructors/destructors (default, parameterized, copy), `const` member functions | `ass2_q2.cpp`, `ass2_q3*.cpp`, `ass2_q7.cpp`, `ass3.cpp`, `base_class.cpp`, `freind.cpp` |
| Static members / static binding | `ass2_q3_c.cpp`, `ass2_q5.cpp` |
| Operator overloading (`+`, `++`, `--`, `==`, `!=`, `<`) and functors (`operator()`) | `ASSG/op_over.cpp`, `ASSG/over.cpp`, `ASSG/answers7.cpp`, `assignment_5/qstner.cpp`, `paper_sol/functors.cpp` |
| Friend functions and friend classes | `add_friend_func.cpp`, `freind.cpp`, `friend_class.cpp`, `paper_sol/abstract.cpp` |
| Inheritance — single, multilevel, hierarchical, multiple, and hybrid (virtual inheritance / diamond problem) | `inheritance.cpp`, `multilevel_square_cube.cpp`, `ASSG/polygon.cpp`, `assignment_5/q1.cpp`, `assignment_5/q2.cpp`, `assignment_5/q3.cpp` |
| Polymorphism — virtual functions, pure virtual/abstract classes, runtime dispatch via base pointers | `assignment_5/chatgpt3.cpp`, `assignment_5/chatgpt_q.cpp`, `assignment_5/q4.cpp`, `paper_sol/virtual.cpp` |
| Templates — function templates, class templates (generic `Stack`) | `ASSG/divide_0.cpp`, `ASSG/estqstn.cpp`, `exception/stack_using_template.cpp`, `exception/templates.cpp` |
| Exception handling (including with templates) | `exception/exception_handling.cpp`, `ASSG/divide_0.cpp` |
| Encapsulation (bank account example, header/implementation split) | `paper_sol/bank.h`, `paper_sol/encap.cpp` |
| Misc constructor tricks (factorial via constructor, dynamic memory in constructors) | `paper_sol/factorial_usingcons.cpp`, `paper_sol/dynamic.cpp`, `paper_sol/dynamic_const.cpp` |

`final.cpp` and `FINAL_BOSS.cpp` are larger practice programs combining
several of the above (student records with inheritance, I/O, etc.) written
ahead of the final exam.

## File structure

- Root — standalone practice programs (one concept/question per file).
- `ASSG/` — numbered assignment solutions, each paired with its assignment
  PDF/DOCX brief.
- `assignment_5/` — Assignment 5: abstract classes and multiple/hybrid
  inheritance, plus a few AI-assisted (`chatgpt*.cpp`) variations.
- `exception/` — exception handling and templates.
- `paper_sol/` — mid-semester test (MST) practice paper solutions.
- `papers/` — reference question papers and the course syllabus (PDF).
- Lecture slides (`*.pptx`) and assignment briefs (`*.pdf`/`*.docx`) — course
  material kept for reference, not code.

## Compiling

Each file is a standalone program with its own `main()`. Compile individually
with g++:

```sh
g++ -std=c++17 -Wall filename.cpp -o filename
./filename
```

For files that depend on a header in the same folder (e.g.
`paper_sol/encap.cpp` needs `paper_sol/bank.h`), compile from that folder:

```sh
cd paper_sol
g++ -std=c++17 encap.cpp -o encap
```

`paper_sol/staticc.java` is a stray Java file (unrelated language, kept as-is
for reference) — compile/run it with `javac`/`java` instead.

## Notes

Compiled binaries that were previously committed (build output from `g++`)
have been removed from version control and are now git-ignored — only
source is tracked.
