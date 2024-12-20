import jwt

import datetime

CLAVE_SECRETA = "contrasena"

datos={
    "username":"abelrojas",
    "exp":datetime.datetime.now() + datetime.timedelta(minutes=10)
}

token = jwt.encode(datos, CLAVE_SECRETA)

print(token)