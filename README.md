# Computer-Graphics


## 📁 Project Files

| File | Shapes |
|------|--------|
| `shapes_1_to_5.cpp` | Triangle, Right Triangle, Parallelogram, Diamond, Ellipse |
| `shapes_6_to_10.cpp` | Octagon, Cube 2D, Filled Star, Hexagon, Circle with Plus |
| `shapes_11_to_15.cpp` | Arrow, Kite, Star Outline, Plus Sign, Trapezoid |
| `shapes_16_to_20.cpp` | Crescent, Cuboid 3D, Half Circle, Cylinder, Gold Cube |

---

## ⚙️ Requirements

- **Language:** C++
- **Library:** OpenGL + GLUT
- **IDE:** Dev C++ or Visual Studio
- **OS:** Windows

---

## 🚀 How to Run

1. Open any `.cpp` file in Dev C++
2. Make sure OpenGL and GLUT are linked in your project settings
3. Press **F11** to compile and run

---

## 🧱 Code Structure

Every file follows the same structure:

```cpp
#include<Windows.h>
#include<GL\glut.h>
#include<math.h>

void draw();       // draws the shapes
void reshape();    // fixes proportions when window resizes
void backGround(); // sets background color

int main() {
    // initialize window
    // register callbacks
    glutMainLoop();
}
```

---

## 📐 OpenGL Primitives Used

| Primitive | Used For |
|-----------|----------|
| `GL_TRIANGLES` | Triangle, Right Triangle, Star, Arrow head |
| `GL_QUADS` | Parallelogram, Diamond, Cube faces, Plus Sign |
| `GL_POLYGON` | Octagon, Hexagon, Ellipse, Circle, Half Circle |
| `GL_LINES` | Cross lines inside circle |
| `GL_LINE_LOOP` | Star outline, Kite border |

---

## 🎨 Color Reference

```cpp
glColor3f(R, G, B); // values from 0.0 to 1.0

// Examples:
glColor3f(1, 0, 0);       // Red
glColor3f(0, 1, 0);       // Green
glColor3f(0, 0, 1);       // Blue
glColor3f(1, 1, 0);       // Yellow
glColor3f(1, 0.5, 0);     // Orange
glColor3f(1, 0.4, 0.7);   // Pink
glColor3f(0.5, 0.2, 0.8); // Purple
glColor3f(0.8, 0.6, 0.1); // Gold
glColor3f(1, 1, 1);       // White
glColor3f(0, 0, 0);       // Black
```

---

## 📍 Coordinate System

```
       y=10
        |
        |
x=-10 --+-- x=10
        |
        |
       y=-10
```

- Center of screen = **(0, 0)**
- Right = positive X
- Left  = negative X
- Up    = positive Y
- Down  = negative Y

---

## 💡 Tips

- To **move** a shape: add/subtract from its X and Y values
- To **resize** a shape: multiply its coordinates by a bigger/smaller number
- Circles and ellipses use a `for` loop with `sin` and `cos`
- 3D-looking shapes (cube, cylinder) are made from multiple flat shapes with different shades of the same color
