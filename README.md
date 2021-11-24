# PC2: Práctica Calificada
**course:** Programación Orientada a Objetos II  
**unit:** 5 y 6  
**cmake project:** poo2_pc2_teo1_v2021_2
## Indicaciones Específicas
- El tiempo límite para la evaluación es 100 minutos.
- Cada pregunta deberá ser respondida en un archivo fuente (`.cpp`) y un archivo cabecera (`.h`) con el número de la pregunta:
  - `p1.cpp, p1.h`
  - `p2.cpp, p2.h`
  - `p3.cpp, p3.h`
- Deberás subir estos archivos directamente a [www.gradescope.com](https://www.gradescope.com) o se puede crear un `.zip` que contenga todos ellos y subirlo.

## Question #1 - complejidad algorítmica (7 points)

Escribir la función template `replace_less_greater` que recibe 2 iteradores de un contenedor que referencien al inicio (start) y al valor posterior al último (stop) y que genere un vector donde los valores del contenedor original sean reemplazados por el menor de los valores más grande a la derecha del valor y si no existiera no debe reemplazarse el valor.

Calcular la compleja algorítmica de su solución, considerando que la funcion usara el contenedor `std::vector`.

Ejemplo #1:
**Use Case:**
```cpp
int n = 0;
cin >> n;
deque<int> dq {1, 20, 4, 2, 90, 30, 80, 1, 4, 3};
auto result = replace_less_greater(begin(dq), end(dq));
for (auto item : result)    // 2 30 30 3 90 80 80 3 4 3 
    cout << item << " ";
cout << endl;
```

Ejemplo #2:
**Use Case:**
```cpp
int n = 0;
cin >> n;
list<int> ls(istream_iterator<int>(cin), istream_iterator<int>());
auto result = replace_less_greater(begin(ls), end(ls));
for (auto item : result) 
    cout << item << " ";
cout << endl;
```

## Question #2 - stack & queue  (7 points)

Desarrollar la función template `for_each_adapter` que similar a la función template `std::for_each` que permita recorrer un `std::queue` y un `std::stack`:

### Ejemplo #1
**Use Case:**
```cpp
stack<int> s({1, 20, 4, 2, 90, 30, 80, 1, 4, 1});

// 1 4 1 80 30 90 2 4 20 1
for_each_adapter(s, [](auto item) {
    cout << item << " ";
});
cout << endl;
```

### Ejemplo #2
**Use Case:**
```cpp
queue<int> q;
int n = 0;
cin >> n;
while (n-- > 0) {
    int value = 0;
    cin >> value;
    q.push(value);
}
for_each_adapter(q, [](auto item) {
    cout << item << " ";
});
cout << endl;
```

### Ejemplo #3
**Use Case:**
```cpp
queue<double> q;
int n = 0;
cin >> n;
while (n-- > 0) {
    int value = 0;
    cin >> value;
    q.push(value);
}
double total = 0; 
for_each_adapter(q, [&total](auto item) {
    total += item;
});
cout << total / n << endl;
```

## Question #3 - programación concurrente (6 points)

Escribir la función template `find_pair_difference` que reciba un contenedor secuencial y que retorne un vector (`std::vector`) de pares (`std:pair`) no repetida cuya diferencia absoluta sea igual a un valor dado.

### Ejemplo #1
**Use Case:**
```cpp
deque<int> dq = {1, 3, 4, 5, 7, 8, 9, 0, 1, 2, 3, 6};
auto result  find_pair_difference(dq, 3);
for (auto [a, b] : result) 
    cout << a << " " << b << endl;
//  0 3
//  1 4
//  2 5
//  3 0
//  3 6
//  4 1
//  4 7
//  5 2
//  5 8
//  6 3
//  6 9
//  7 4
//  8 5
//  9 6
```

### Ejemplo #2
**Use Case:**
```cpp
    list<int> dq = {1, 3, 4, 5, 7, 8, 9, 0, 1, 2, 3, 6, 5, 1, 3, 4, 11, 4, 10};
    auto result  find_pair_difference(dq, 13);
    for (auto [a, b] : result)
        cout << a << " " << b << endl;
```