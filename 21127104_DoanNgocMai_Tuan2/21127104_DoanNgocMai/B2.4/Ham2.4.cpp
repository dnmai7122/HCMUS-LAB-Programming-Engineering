#include"Ham2.4.h"
bool splitArrayHelper(int start, string nums, string group1, string group2)
{
    if (start >= nums.length)
        return group1 == group2;

    if (splitArrayHelper(start + 1, nums, group1 + nums[start], group2))
        return true;

    if (splitArrayHelper(start + 1, nums, group1, group2 + nums[start]))
        return true;

    return false;
}