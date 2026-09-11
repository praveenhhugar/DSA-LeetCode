# Valid Parentheses

## Problem

Given a string containing only the characters (, ), {, }, [ and ],
determine if the input string is valid.

A string is valid when every opening bracket is closed by the same type of
bracket and the brackets are closed in the correct order.

## My Approach

I used a stack to keep track of the opening brackets.

- If the character is an opening bracket, I push it into the stack.
- If the character is a closing bracket, I first check whether the stack is empty.
- If the stack is not empty, I compare the closing bracket with the top opening
  bracket in the stack.
- If they match, I pop the opening bracket.
- If they do not match, I return false.
- After checking the complete string, the stack should be empty for the string
  to be valid.

## Example

`text
Input: "([])"

Opening brackets are pushed into the stack.

[ and ] match.
( and ) match.

Answer: true