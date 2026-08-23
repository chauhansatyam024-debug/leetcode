class Solution:
    def checkDivisibility(self, n: int) -> bool:
        lst = [int(c) for c in list(str(n))]
        sums = sum(lst)
        prods = prod(lst)
        return n % (sums + prods) == 0

