def debug(func):
    def wrapper(*args, **kwargs):
        args_value = ' ,'.join(str(arg) for arg in args)
        kwargs_value = ' .'.join(f"{k} = {v}" for k, v in kwargs.items())
        print(f"calling: {func.__name__} with args and kwargs({args_value}, {kwargs_value})")
        return func(*args, **kwargs)
    return wrapper

@debug
def hello():
    print("Hello")

@debug
def greet(name, greeting = "Hello"):
    print (f"{greeting}, {name}")


greet("Priyanshu","Namaste")