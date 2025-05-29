def calcular_promedio(calificaciones):
    """Calcula el promedio de una lista de calificaciones"""
    return sum(calificaciones) / len(calificaciones)

def evaluar_aprobacion(promedio):
    """Determina si un estudiante está aprobado o reprobado"""
    return "Aprobado" if promedio >= 6.0 else "Reprobado"

def main():
    # Pedir al usuario el número de estudiantes a registrar
    num_estudiantes = int(input("¿Cuántos estudiantes quiere registrar? "))
    
    # Lista para almacenar la información de todos los estudiantes
    estudiantes = []
    
    # Contadores para aprobados y reprobados
    aprobados = 0
    reprobados = 0
    
    # Registrar información de cada estudiante
    for i in range(num_estudiantes):
        print(f"\nRegistro del estudiante #{i+1}")
        nombre = input("Nombre del estudiante: ")
        
        # Pedir las 3 calificaciones
        calificaciones = []
        for j in range(3):
            calificacion = float(input(f"Calificación de la materia {j+1}: "))
            calificaciones.append(calificacion)
        
        # Calcular promedio
        promedio = calcular_promedio(calificaciones)
        
        # Evaluar aprobación
        estado = evaluar_aprobacion(promedio)
        
        # Actualizar contadores
        if estado == "Aprobado":
            aprobados += 1
        else:
            reprobados += 1
        
        # Guardar información del estudiante
        estudiantes.append({
            "nombre": nombre,
            "calificaciones": calificaciones,
            "promedio": promedio,
            "estado": estado
        })