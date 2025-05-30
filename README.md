# PROGRAMA DE REGISTRO Y EVALUACIÓN DE ESTUDIANTES
--------------------------------------------------
💡 DESCRIPCIÓN
--------------------------------------------------
<p align="justify">
Este programa en Python permite registrar a un número
determinado de estudiantes, ingresar sus calificaciones
en tres materias, calcular su promedio y determinar
si han aprobado o no. Al final, se muestra un resumen
con el total de estudiantes, cuántos aprobaron y cuántos
reprobaron.

📌 OBJETIVOS
--------------------------------------------------
<p align="justify">
- Registrar la información de cada estudiante.
- Calcular el promedio de sus calificaciones.
- Determinar si ha aprobado o reprobado.
- Mostrar un resumen final con estadísticas.

⚙️ FUNCIONAMIENTO
--------------------------------------------------
1️⃣ Ingreso de datos:
   - Se solicita el número de estudiantes.
   - Se pide el nombre y tres calificaciones por estudiante.

2️⃣ Cálculo del promedio:
   - Se suman las tres calificaciones.
   - El promedio se redondea a dos decimales.

3️⃣ Evaluación del estado:
   - Promedio >= 6.0  →  Aprobado
   - Promedio < 6.0   →  Reprobado

4️⃣ Resultados:
   - Nombre, calificaciones, promedio y estado.
   - Resumen final con totales.

✏️ EJEMPLO DE SALIDA
--------------------------------------------------
Ingrese el número de estudiantes: 2

Estudiante 1
Nombre: Ana
Calificación 1: 8
Calificación 2: 9
Calificación 3: 7

Estudiante 2
Nombre: Luis
Calificación 1: 5
Calificación 2: 6
Calificación 3: 4

🎯 RESULTADOS 

Ana - Promedio: 8.0 - Aprobado
Luis - Promedio: 5.0 - Reprobado

Total de estudiantes aprobados: 1
Total de estudiantes reprobados: 1

✅ PISTAS TÉCNICAS
--------------------------------------------------
- Usa una función `calcular_promedio(lista)` para obtener
  el promedio de las calificaciones.
- Usa otra función `evaluar_aprobacion(promedio)` que
  devuelva "Aprobado" o "Reprobado".
- Emplea listas o diccionarios para almacenar los datos.
- Usa `range()` para controlar el número de iteraciones.

🛠️ REQUISITOS
--------------------------------------------------
- Lenguaje: Python.
- Consola o terminal para interacción.

🚀 POSIBLES MEJORAS
--------------------------------------------------
- Validar que las calificaciones estén entre 0 y 10.
- Agregar más materias.
- Exportar resultados a CSV o JSON.
- Crear una interfaz gráfica.

