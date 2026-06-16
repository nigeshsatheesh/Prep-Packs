# practice 1 - Numpy package usage

import numpy
arr=numpy.array([[1,2,3],[4,5,6],[7,8,9]])
print (arr.size) #returns size of array
print (arr.ndim) #returns no of dimensions fo the array
print (arr.shape) #returns no of rows and columns
print (arr.dtype.name) #returns datatype of array elements
print (arr*2) #integer multiplication
print (arr**2) #squaring the array elements
print (numpy.dot(arr,[[3,3,3],[3,3,3],[3,3,3]])) #matrix multiplication
print (arr<5) #logical operator 
print (arr[0,1]) #indexing
print (arr[0,:]) #returns zeroth row
print (arr[:,0]) #returns first row
print (arr[0,1:3]) #slicing
print (arr.ravel()) #displays array in single line
print (numpy.arange(7)) #displays array elements in ascending order
print (arr.transpose()) #returns transpose of the matrix
print (numpy.array([[1,2,3],[4,5,6],[7,8,9],[10,11,12]]).reshape(2,6)) #changes the shape of the matrix
print (numpy.zeros((3,3))) #changes enitre matrix into zero matrix
print (numpy.ones((3,3))) #changes enitre matrix into one matrix7,
print (numpy.array([[1,2],[3,4]])*numpy.array([[5,6],[7,8]])) #broadcasting
print (numpy.matrix('1 2;3 4')) #returns conjugate transpose of the matrix
