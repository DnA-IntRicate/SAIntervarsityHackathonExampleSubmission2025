# Use an official GCC image to build and run the C++ project
FROM gcc:12

# Set working directory
WORKDIR /app

# Copy source code into container
COPY src/ /app/
COPY vendor/ /app/vendor/

# Build the C++ program
RUN g++ -std=c++20 \
    -I. \
    -I./include \
    -I./vendor/IntricatePointers/IntricatePointers/src/include \
    -o hello source/Main.cpp

# Run the program
CMD ["./hello"]
