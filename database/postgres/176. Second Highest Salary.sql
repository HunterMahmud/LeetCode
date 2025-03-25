-- 176. Second Highest Salary
-- url: https://leetcode.com/problems/second-highest-salary

-- Write your PostgreSQL query statement below
SELECT
    (SELECT
        DISTINCT
            salary
    FROM
        Employee
    ORDER BY
        salary DESC
    OFFSET
        1
    LIMIT
        1)  AS SecondHighestSalary;