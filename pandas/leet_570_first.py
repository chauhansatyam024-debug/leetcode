import pandas as pd

def find_managers(employee: pd.DataFrame) -> pd.DataFrame:

    result = pd.merge(employee,employee,left_on = 'managerId', right_on = 'id',suffixes = ('_e1','_e2'))

    result['haa'] = result.groupby('id_e2')['id_e1'].transform('count') >=5

    result = result[result['haa']]

    result = result[['id_e2','name_e2']].drop_duplicates()

    result = result[['name_e2']].rename(columns = {'name_e2':'name'})

    return pd.DataFrame(result)


