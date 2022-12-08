Made by: Cristoval Neo Sasono_2602158235_L1BC

# Matrix-Vector-Mult-Benchmark

This is a program written in C language, made to randomly generate an NxN Matrix with an Nx1 Vector, before multiplying them together.


# Running The Program

The result shown bellow shows that the matrix-vector function is working properly. If in doubt, use any matrix multiplication calculator or calculate it manually.

Open your terminal (Can either be directly or from an IDE) and make sure the correct directory containing all the necessary files is open('matrix-vector-mult-benchmark').

Write the following lines in your terminal:
- make          : To check the matrix-vector multiplication function
- make time     : To check the time complexity of the matrix-vector multiplication function.
- make space    : To check the space complexity of the matrix-vector multiplication function.
- make clear    : To clear all object and out files.
 
 # Self-Test: Checking The Function
![Space N = 1000](self_test_images/MatVecMult_Test.png)


# Self-Test: Analyzing The Time Complexity

The result shown bellow shows the time complexity of the function with different matrix sizes (N):

Test 1:
![Space N = 1000](self_test_images/Time_Test1.png)
Test 2:
![Space N = 1000](self_test_images/Time_Test2.png)
Test 3:
![Space N = 1000](self_test_images/Time_Test3.png)

    Average result:
    N = 200 -> 0.000956 s -> 0.956 ms
    N = 400 -> 0.003658 s -> 3.658 ms
    N = 600 -> 0.007328 s -> 7.328 ms
    N = 800 -> 0.011045 s -> 11.045 ms
    N = 1000 -> 0.016582 s -> 16.582 ms
    N = 1200 -> 0.024046 s -> 24.046 ms
    N = 1400 -> 0.032338 s -> 32.338 ms
    N = 1600 -> 0.041849 s -> 41.849 ms
    N = 1800 -> 0.053464 s -> 53.464 ms
    N = 2000 -> 0.060999 s -> 60.999 ms

Graph results of Time Complexity:
![Space N = 1000](self_test_images/TotalTime.png)

# Self-Test: Analyzing The Space Complexity

The result shown bellow shows the space complexity of the function with different matrix sizes (N):

N = 200:
![Space N = 1000](self_test_images/space_200.png)
N = 400:
![Space N = 1000](self_test_images/space_400.png)
N = 600:
![Space N = 1000](self_test_images/space_600.png)
N = 800:
![Space N = 1000](self_test_images/space_800.png)
N = 1000:
![Space N = 1000](self_test_images/space_1000.png)
N = 1200:
![Space N = 1000](self_test_images/space_1200.png)
N = 1400:
![Space N = 1000](self_test_images/space_1400.png)
N = 1600:
![Space N = 1000](self_test_images/space_1600.png)
N = 1800:
![Space N = 1000](self_test_images/space_1800.png)
N = 2000:
![Space N = 1000](self_test_images/space_2000.png)

Graph results of Space Complexity:
![Space N = 1000](self_test_images/Spacegraph.png)