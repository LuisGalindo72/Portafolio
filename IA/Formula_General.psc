Algoritmo Formula_General
    
    Escribir "Ingrese A:"
    Leer a
    Escribir "Ingrese B:"
    Leer b
    Escribir "Ingresa C:"
    Leer c
    
    disc <- b^2-4*a*c
    Si disc<0 Entonces
        preal<- (-b)/(2*a)
        pimag<- rc(-disc)/(2*a)
        Escribir "Raiz 1: ",preal,"+",pimag,"i"
        Escribir "Raiz 2: ",preal,"-",pimag,"i"
    Sino
        Si disc=0 Entonces
            r <- (-b)/(2*a)
            Escribir "Raiz 1 = Raiz 2: ",r
        Sino
            r1 <- ((-b)+rc(disc))/(2*a)
            r2 <- ((-b)-rc(disc))/(2*a)
            Escribir "Raiz 1: ",r1
            Escribir "Raiz 2: ",r2
        FinSi
    FinSi
    
FinProceso
