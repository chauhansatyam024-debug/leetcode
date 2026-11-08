import pandas as pd


def second_highest_salary(employee: pd.DataFrame) -> pd.DataFrame:
    chk = employee['salary'].drop_duplicates()
    if len(chk) > 1:
        result = chk.sort_values(ascending=False).iloc[1]

        return pd.DataFrame({'SecondHighestSalary': [result]})
    else:
        return pd.DataFrame({'SecondHighestSalary': [None]})
