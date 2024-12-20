import jwt

def decode_jwt(token, secret):
    try:
        decoded = jwt.decode(token, secret)
        return decoded
    except jwt.ExpiredSignatureError:
        return "Token has expired"
    except jwt.InvalidTokenError:
        return "Invalid token"

# Example usage
token = "your_jwt_token_here"
secret = "your_secret_key_here"
decoded_token = decode_jwt(token, secret)
print(decoded_token)