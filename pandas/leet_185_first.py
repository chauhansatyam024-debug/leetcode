import pandas as pd

def top_three_salaries(employee: pd.DataFrame, department: pd.DataFrame) -> pd.DataFrame:
    result = pd.merge(employee,department,left_on = 'departmentId' ,right_on = 'id' ,suffixes = ('_emp','_dept'))

    result['rank'] = result.groupby('departmentId')['salary'].rank(method = 'dense', ascending = False)

    result = result[result['rank'] <=3]

    result = result[['name_dept','name_emp','salary']].rename(columns ={'name_dept':'Department','name_emp':'Employee','salary':'Salary'})

    return pd.DataFrame(result)
