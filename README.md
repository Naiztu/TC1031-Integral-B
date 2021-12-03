
<a href="tec.mx">
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
Es la implementación de un árbol binario de búsqueda auto balanceable como un red-black tree o AVL; los métodos insert, remove y seaarch tienen complejidad O(log(n)), mientras que la impresión de los elementos ordenados tiene complejidad de O(n)



<iframe
  src="https://carbon.now.sh/embed?bg=rgba%28171%2C+184%2C+195%2C+1%29&t=seti&wt=none&l=auto&ds=true&dsyoff=20px&dsblur=68px&wc=true&wa=true&pv=56px&ph=56px&ln=false&fl=1&fm=Hack&fs=14px&lh=133%25&si=false&es=2x&wm=false&code=%252F%252F%2520CPP%2520program%2520to%2520demonstrate%2520various%2520functions%2520of%250A%252F%252F%2520Set%2520in%2520C%252B%252B%2520STL%250A%2523include%2520%253Ciostream%253E%250A%2523include%2520%253Citerator%253E%250A%2523include%2520%253Cset%253E%250A%250Ausing%2520namespace%2520std%253B%250A%250Aint%2520main%28%29%250A%257B%250A%2509%252F%252F%2520empty%2520set%2520container%250A%2509set%253Cint%252C%2520greater%253Cint%253E%2520%253E%2520s1%253B%250A%250A%2509%252F%252F%2520insert%2520elements%2520in%2520random%2520order%250A%2509s1.insert%2840%29%253B%250A%2509s1.insert%2830%29%253B%250A%2509s1.insert%2860%29%253B%250A%2509s1.insert%2820%29%253B%250A%2509s1.insert%2850%29%253B%250A%250A%2509%252F%252F%2520only%2520one%252050%2520will%2520be%2520added%2520to%2520the%2520set%250A%2509s1.insert%2850%29%253B%250A%2509s1.insert%2810%29%253B%250A%250A%2509%252F%252F%2520printing%2520set%2520s1%250A%2509set%253Cint%252C%2520greater%253Cint%253E%2520%253E%253A%253Aiterator%2520itr%253B%250A%2509cout%2520%253C%253C%2520%2522%255CnThe%2520set%2520s1%2520is%2520%253A%2520%255Cn%2522%253B%250A%2509for%2520%28itr%2520%253D%2520s1.begin%28%29%253B%2520itr%2520%21%253D%2520s1.end%28%29%253B%2520itr%252B%252B%29%2520%257B%250A%2509%2509cout%2520%253C%253C%2520*itr%2520%253C%253C%2520%2522%2520%2522%253B%250A%2509%257D%250A%2509cout%2520%253C%253C%2520endl%253B%250A%250A%2509%252F%252F%2520assigning%2520the%2520elements%2520from%2520s1%2520to%2520s2%250A%2509set%253Cint%253E%2520s2%28s1.begin%28%29%252C%2520s1.end%28%29%29%253B%250A%250A%2509%252F%252F%2520print%2520all%2520elements%2520of%2520the%2520set%2520s2%250A%2509cout%2520%253C%253C%2520%2522%255CnThe%2520set%2520s2%2520after%2520assign%2520from%2520s1%2520is%2520%253A%2520%255Cn%2522%253B%250A%2509for%2520%28itr%2520%253D%2520s2.begin%28%29%253B%2520itr%2520%21%253D%2520s2.end%28%29%253B%2520itr%252B%252B%29%2520%257B%250A%2509%2509cout%2520%253C%253C%2520*itr%2520%253C%253C%2520%2522%2520%2522%253B%250A%2509%257D%250A%2509cout%2520%253C%253C%2520endl%253B%250A%250A%2509%252F%252F%2520remove%2520all%2520elements%2520up%2520to%252030%2520in%2520s2%250A%2509cout%2520%253C%253C%2520%2522%255Cns2%2520after%2520removal%2520of%2520elements%2520less%2520than%252030%2520%2522%250A%2509%2509%2509%2522%253A%255Cn%2522%253B%250A%2509s2.erase%28s2.begin%28%29%252C%2520s2.find%2830%29%29%253B%250A%2509for%2520%28itr%2520%253D%2520s2.begin%28%29%253B%2520itr%2520%21%253D%2520s2.end%28%29%253B%2520itr%252B%252B%29%2520%257B%250A%2509%2509cout%2520%253C%253C%2520*itr%2520%253C%253C%2520%2522%2520%2522%253B%250A%2509%257D%250A%250A%2509%252F%252F%2520remove%2520element%2520with%2520value%252050%2520in%2520s2%250A%2509int%2520num%253B%250A%2509num%2520%253D%2520s2.erase%2850%29%253B%250A%2509cout%2520%253C%253C%2520%2522%255Cns2.erase%2850%29%2520%253A%2520%2522%253B%250A%2509cout%2520%253C%253C%2520num%2520%253C%253C%2520%2522%2520removed%255Cn%2522%253B%250A%2509for%2520%28itr%2520%253D%2520s2.begin%28%29%253B%2520itr%2520%21%253D%2520s2.end%28%29%253B%2520itr%252B%252B%29%2520%257B%250A%2509%2509cout%2520%253C%253C%2520*itr%2520%253C%253C%2520%2522%2520%2522%253B%250A%2509%257D%250A%250A%2509cout%2520%253C%253C%2520endl%253B%250A%250A%2509%252F%252F%2520lower%2520bound%2520and%2520upper%2520bound%2520for%2520set%2520s1%250A%2509cout%2520%253C%253C%2520%2522s1.lower_bound%2840%29%2520%253A%2520%255Cn%2522%250A%2509%2509%253C%253C%2520*s1.lower_bound%2840%29%2520%253C%253C%2520endl%253B%250A%2509cout%2520%253C%253C%2520%2522s1.upper_bound%2840%29%2520%253A%2520%255Cn%2522%250A%2509%2509%253C%253C%2520*s1.upper_bound%2840%29%2520%253C%253C%2520endl%253B%250A%250A%2509%252F%252F%2520lower%2520bound%2520and%2520upper%2520bound%2520for%2520set%2520s2%250A%2509cout%2520%253C%253C%2520%2522s2.lower_bound%2840%29%2520%253A%255Cn%2522%250A%2509%2509%253C%253C%2520*s2.lower_bound%2840%29%2520%253C%253C%2520endl%253B%250A%2509cout%2520%253C%253C%2520%2522s2.upper_bound%2840%29%2520%253A%2520%255Cn%2522%250A%2509%2509%253C%253C%2520*s2.upper_bound%2840%29%2520%253C%253C%2520endl%253B%250A%250A%2509return%25200%253B%250A%257D"
  style="width: 639px; height: 1582px; border:0; transform: scale(1); overflow:hidden;"
  sandbox="allow-scripts allow-same-origin">
</iframe>


## **Correciones** 📌
 _Primer avance: Completo._
 _Segundo avance: Completo._
 _Set como estructura de datos_

## **Lenguaje** 👅
*  *C++*

## **Autor** ✒️
_Este proyecto es realizado para la UF "Programación de estructuras de datos y algoritmos fundamentales" (TC1031) por :_
* **José Ángel Rico Mendieta** - *A01707404*

