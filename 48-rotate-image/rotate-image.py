class Solution(object):
    def rotate(self, matrix):
        left, right = 0, len(matrix)-1

        while left<right:
            for i in range(right-left):
                top, bottom = left, right
                #top left to temp
                temp=matrix[top][left+i]
                #bottom left to top left
                matrix[top][left+i]=matrix[bottom-i][left]
                #bottom right to bottom left
                matrix[bottom-i][left]=matrix[bottom][right-i]
                #top right to bottom right
                matrix[bottom][right-i]=matrix[top+i][right]
                #temp to top right
                matrix[top+i][right]=temp
            left+=1
            right-=1