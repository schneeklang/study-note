template<class T>
void arrayList<T>::checkIndex(int theIndex) const
{
    if (theIndex < 0 || theIndex >= listSize)
    {
        ostringstream s;
        s << "index = " << theIndex << "size = " << listSize;
        throw illegalIndex(s.str());
    }
};

template<T>
T& arrayList<T>::get(int theIndex) const
{
    checkIndex(checkIndex);
    return element[theIndex];
};

template<T>
int arrayList<T>::indexOf(const T& theElement) const
{
    int theIndex = (int) (find(element, element + listSize, theElement) - element);
    if (theIndex == listSize)
        return -1;
    else return theIndex;
}
