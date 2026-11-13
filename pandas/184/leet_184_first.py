import pandas as pd


def department_highest_salary(employee: pd.DataFrame, department: pd.DataFrame) -> pd.DataFrame:
    result = pd.merge(employee, department, left_on='departmentId', right_on='id', suffixes=('_emp', '_dept'))
    result['max_sal'] = result.groupby('departmentId')['salary'].transform('max')

    result = result[result['salary'] == result['max_sal']]

    result = result[['name_dept', 'name_emp', 'salary']].rename(
        columns={'name_dept': 'Department', 'name_emp': 'Employee', 'salary': 'Salary'})

    return pd.DataFrame(result)

    return pd.DataFrame({'chk': [top]})
