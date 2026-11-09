import pandas as pd


def nth_highest_salary(employee: pd.DataFrame, N: int) -> pd.DataFrame:
    chk = employee['salary'].drop_duplicates().sort_values(ascending=False)
    T = N - 1
    if len(chk) >= N and N > 0:
        nth = chk.iloc[T]
        return pd.DataFrame({f'getNthHighestSalary({N})': [nth]})
    else:
        return pd.DataFrame({f'getNthHighestSalary({N})': [None]})
