def calcular_promedio(calificaciones):
    """Calcula el promedio de una lista de calificaciones"""
    return sum(calificaciones) / len(calificaciones)

def evaluar_aprobacion(promedio):
    """Determina si un estudiante está aprobado o reprobado"""
    return "Aprobado" if promedio >= 6.0 else "Reprobado"
from funciones import calcular_promedio, evaluar_aprobacion