while (start <= end)
    {
      if (nums[mid] == key)
      {
        return mid;
      }
  // right part
      if (key > nums[mid])
      {
        start = mid + 1;
      }
    else
    {
      end = mid - 1;
    }
  //  mid = (start+end)/2;
    mid = start + ((end-start)/2);
  }
  return -1;
}