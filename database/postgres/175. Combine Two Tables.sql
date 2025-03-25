-- url: https://leetcode.com/problems/combine-two-tables/
-- title: 175. Combine Two Tables
-- Write your PostgreSQL query statement below
select firstName, lastName, city, state from Person
left join Address on Person.personId = Address.personId;