
<a href="https://tec.mx/es">
    <img src="https://javier.rodriguez.org.mx/itesm/2014/tecnologico-de-monterrey-black.png" alt="ITESM" title="ITESM" align="right" height="60" />
</a>

# **MC Burguer** 🍔

#### **_TC1031-Integral-B_**
Repositorio dedicado al proyecto integral de la materia Programación de estructuras de datos y algoritmos fundamentales
## **Competencias empleadas para evaluar:** ✅
**SICT0302B:**
* _Usa grafos para hacer analisis de información_
* _Usa un algoritmo de búsqueda en grafos adecuado para resolver un problema_


**SEG0702A:**
* _Investiga e implementa un algoritmo o una estructura de datos que no se vió durante el curso._
* _Describe cada algoritmo de la estructura (inserción, consulta, etc...) de forma clara y con ejemplos_


## **Logica inicial** ⚙️ 
### **Primera Opción:**
Se desea saber el menú que se encuentra y desplegarlo para presentarlo o recordar los atributos que pertenecen al mismo: nombre, precio, id. Como siempre se muestra todos los articulos, se opto por una lista._


### **Segunda Opción:** 
_En caso que se necesite recomendar una hamburguesa, cada una tiene un numero de relación, que identifica que tanto se relacionan con otras. Se opto por grafos que contendran las relaciones mas cercanas._


### **Tercera Opción:** 
_Mediante un Set ordena el numero de conectividad entre los productos de menor a mayor, para posterior presentarlo en lista._


## **Análisis de complejidad** 📈 

*   ### **Método Merge / sorts.h**
    _El algoritmo empleado en esta función, se apoya con un vector auxiliar, y al pasar el resultado de uno a otro, crea una complejidad de O(n), mientras que en otra parte va haciendo operaciones donde los pasos se reducen a la mitad conforme se acomoda, lo que genera una complejidad d O(Log(n)). Juntando estos dos casos, identificamos que la complejidad es de O(n Log(n))_
*   ### **Lista / Productos**
    _Como siempre se muestra todo el menú, se necesita iterar toda la lista, por lo que se entiende por una complejidad de O(n)._
*   ### **Grafos**
    _Para agregar el grafo se usa un método con complejidad O(n), ya que se itera toda la lista de productos, también compara el número de relación con las demás, operación constante._
    ### **Set**
    _El Set al estar compuesto de un árbol binario, la búsqueda y ordenamiento se ejecuta por pasos cada vez más pequeños al estar condicionando el valor de los nodos. Teniendo una complejidad de O(log(n))._
## **SET como estructura de datos no vista en el curso**
Set en C ++ se puede definir como un tipo de contenedor asociativo que almacena los datos en un par clave-valor y en el que cada elemento de valor tiene que ser único, porque el valor del elemento lo identifica. Características del Set:
*	Clasificación: Se almacenan en orden
*	Valores duplicados: Los valores duplicados no pueden almacenarse.
*	Tipo: los objetos tienen que ser del mismo tipo.
*	Manipulación: No se pueden modificar los valores una vez que se insertan, pero se puede eliminar e insertarlos de nuevo.


Es excelente opción para almacenar cantidad grande de objetos ordenados que deben acceder rápido.
Es la implementación de un árbol binario de búsqueda auto balanceable como un red-black tree o AVL; los métodos insert, remove y seaarch tienen complejidad O(log(n)), mientras que la impresión de los elementos ordenados tiene complejidad de O(n).



**Codigo de ejemplo:**

<a href="#">
    <img src="https://gallusgallus.000webhostapp.com/codigo.png" />
</a>

**Salida:**
<a href="#">
    <img src="https://gallusgallus.000webhostapp.com/codigo2.png" />
</a>


## **Correciones** 📌
 _Primer avance: Completo._
 _Segundo avance: Completo._
 _Set como estructura de datos_

## **Lenguaje** 👅
*  *C++*

## **Autor** ✒️
_Este proyecto es realizado para la UF "Programación de estructuras de datos y algoritmos fundamentales" (TC1031) por :_
* **José Ángel Rico Mendieta** - *A01707404*

