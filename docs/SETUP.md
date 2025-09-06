# Setup Instructions

Follow the steps below to set up and run the project.
---

## 📦 Requirements
- Docker v28.3+
- Docker Compose

---

## 1. 🐳 Install Docker

### Windows
[Download Docker Desktop for Windows.](https://docs.docker.com/desktop/setup/install/windows-install/)

### Arch-based
``` bash
# Full system & repo update
sudo pacman -Syu

# Install Docker & Docker-compose
sudo pacman -S docker docker-compose

# Enable & start Docker daemon
sudo systemctl enable docker
sudo systemctl start docker
```

### Debian-based
``` bash
# Install prereqs
sudo apt update
sudo apt install -y ca-certificates curl gnupg lsb-release

# Add Docker's official GPG key & repo
sudo mkdir -p /etc/apt/keyrings
curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo gpg --dearmor -o /etc/apt/keyrings/docker.gpg
echo \
  "deb [arch=$(dpkg --print-architecture) signed-by=/etc/apt/keyrings/docker.gpg] \
  https://download.docker.com/linux/ubuntu \
  $(lsb_release -cs) stable" | sudo tee /etc/apt/sources.list.d/docker.list > /dev/null

# Install Docker & Docker-compose
sudo apt update
sudo apt install -y docker-ce docker-ce-cli containerd.io docker-compose-plugin

# Enable & start Docker daemon
sudo systemctl enable docker
sudo systemctl start docker
```

## 2. ⚙️ Install the Project
``` bash
# Clone the repo
git clone https://github.com/DnA-IntRicate/SAIntervarsityHackathonExampleSubmission2025

# Enter the repo
cd SAIntervarsityHackathonExampleSubmission2025
```

## 3. ▶️ Run the Project
``` bash
# Build and run the project (requires Docker)
python3 scripts/Run.py
```
## ✍️ Remarks
Since the entire project is **containerized** in a **Docker image**, it requires no other dependencies to be manually installed or linked. This is why we highly recommend that your submit your project as a **Docker image**.
