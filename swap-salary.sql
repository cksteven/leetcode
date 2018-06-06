# Write your MySQL query statement below
# https://leetcode.com/problems/swap-salary/solution/
UPDATE salary
SET
    sex = CASE sex
        WHEN 'm' THEN 'f'
        ELSE 'm'
    END;