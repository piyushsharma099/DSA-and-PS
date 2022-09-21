from typing import (
    Any,
    overload,
)

import numpy as np
from pandas import (
    Categorical,
    Index,
    Series,
)
from pandas.api.extensions import ExtensionArray

from pandas._typing import AnyArrayLike

@overload
def unique(values: Index) -> Index: ...
@overload
def unique(values: Categorical) -> Categorical: ...
@overload
def unique(values: Series) -> np.ndarray | ExtensionArray: ...
@overload
def unique(values: np.ndarray | list) -> np.ndarray: ...
@overload
def unique(values: ExtensionArray) -> ExtensionArray: ...
def factorize(
    values: Any,
    sort: bool = ...,
    na_sentinel: int | None = ...,
    use_na_sentinel: bool = ...,
    size_hint: int | None = ...,
) -> tuple[np.ndarray, np.ndarray | Index]:
    """
Encode the object as an enumerated type or categorical variable.

This method is useful for obtaining a numeric representation of an
array when all that matters is identifying distinct values. `factorize`
is available as both a top-level function :func:`pandas.factorize`,
and as a method :meth:`Series.factorize` and :meth:`Index.factorize`.

Parameters
----------
values : sequence
    A 1-D sequence. Sequences that aren't pandas objects are
    coerced to ndarrays before factorization.
sort : bool, default False
    Sort `uniques` and shuffle `codes` to maintain the
    relationship.

na_sentinel : int or None, default -1
    Value to mark "not found". If None, will not drop the NaN
    from the uniques of the values.

    .. versionchanged:: 1.1.2
size_hint : int, optional
    Hint to the hashtable sizer.

Returns
-------
codes : ndarray
    An integer ndarray that's an indexer into `uniques`.
    ``uniques.take(codes)`` will have the same values as `values`.
uniques : ndarray, Index, or Categorical
    The unique valid values. When `values` is Categorical, `uniques`
    is a Categorical. When `values` is some other pandas object, an
    `Index` is returned. Otherwise, a 1-D ndarray is returned.

    .. note::

       Even if there's a missing value in `values`, `uniques` will
       *not* contain an entry for it.

See Also
--------
cut : Discretize continuous-valued array.
unique : Find the unique value in an array.

Notes
-----
Reference :ref:`the user guide <reshaping.factorize>` for more examples.

Examples
--------
These examples all show factorize as a top-level method like
``pd.factorize(values)``. The results are identical for methods like
:meth:`Series.factorize`.

>>> codes, uniques = pd.factorize(['b', 'b', 'a', 'c', 'b'])
>>> codes
array([0, 0, 1, 2, 0]...)
>>> uniques
array(['b', 'a', 'c'], dtype=object)

With ``sort=True``, the `uniques` will be sorted, and `codes` will be
shuffled so that the relationship is the maintained.

>>> codes, uniques = pd.factorize(['b', 'b', 'a', 'c', 'b'], sort=True)
>>> codes
array([1, 1, 0, 2, 1]...)
>>> uniques
array(['a', 'b', 'c'], dtype=object)

Missing values are indicated in `codes` with `na_sentinel`
(``-1`` by default). Note that missing values are never
included in `uniques`.

>>> codes, uniques = pd.factorize(['b', None, 'a', 'c', 'b'])
>>> codes
array([ 0, -1,  1,  2,  0]...)
>>> uniques
array(['b', 'a', 'c'], dtype=object)

Thus far, we've only factorized lists (which are internally coerced to
NumPy arrays). When factorizing pandas objects, the type of `uniques`
will differ. For Categoricals, a `Categorical` is returned.

>>> cat = pd.Categorical(['a', 'a', 'c'], categories=['a', 'b', 'c'])
>>> codes, uniques = pd.factorize(cat)
>>> codes
array([0, 0, 1]...)
>>> uniques
['a', 'c']
Categories (3, object): ['a', 'b', 'c']

Notice that ``'b'`` is in ``uniques.categories``, despite not being
present in ``cat.values``.

For all other pandas objects, an Index of the appropriate type is
returned.

>>> cat = pd.Series(['a', 'a', 'c'])
>>> codes, uniques = pd.factorize(cat)
>>> codes
array([0, 0, 1]...)
>>> uniques
Index(['a', 'c'], dtype='object')

If NaN is in the values, and we want to include NaN in the uniques of the
values, it can be achieved by setting ``na_sentinel=None``.

>>> values = np.array([1, 2, 1, np.nan])
>>> codes, uniques = pd.factorize(values)  # default: na_sentinel=-1
>>> codes
array([ 0,  1,  0, -1])
>>> uniques
array([1., 2.])

>>> codes, uniques = pd.factorize(values, na_sentinel=None)
>>> codes
array([0, 1, 0, 2])
>>> uniques
array([ 1.,  2., nan])
    """
    pass
def value_counts(
    values: AnyArrayLike | list | tuple,
    sort: bool = ...,
    ascending: bool = ...,
    normalize: bool = ...,
    bins: int | None = ...,
    dropna: bool = ...,
) -> Series: ...
