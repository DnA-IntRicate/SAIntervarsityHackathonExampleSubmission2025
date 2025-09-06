import subprocess

try:
    subprocess.run(["docker", "info"], check = True)
except subprocess.CalledProcessError:
    print("Docker is not reachable, please start the Docker daemon or check permissions!")
    exit()

print("Building and running Docker container...")

subprocess.run(["docker", "build", "-t", "app", "."], check = True)
subprocess.run(["docker", "run", "--rm", "app"], check = True)
