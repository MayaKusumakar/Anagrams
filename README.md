# Anagrams
## Problem
Write a program that checks if two strings are anagrams. A string is an anagram of another string if the letters in the first string can be rearranged to form the second string. For example, army and Mary are anagrams because the letters in army can be rearranged to form Mary.

## Specifications
Your check if two strings are anagrams should be case-insensitive
Ex: MARY and army are anagrams
The user will only enter words and not phrases
No input string will be longer than 20 characters
These 20 characters are not accounting for the null character you will need at the end of your string
## Assumptions
Input will always be valid

## Valid Input
Word 1: A sequence of alphabetical characters without any whitespace in the middle that is no more than 20 characters long.
Word 2: A sequence of alphabetical characters without any whitespace in the middle that is no more than 20 characters long.
## Requirements
You must use have at least 2 functions in your program
## Restrictions
No global variables may be used

# Examples

## Example 1
Please enter the first word: MaRy

Please enter the second word: arMY

MaRy is an anagram of arMY

## Example 2
Please enter the first word: dog

Please enter the second word: god

dog is an anagram of god

## Example 3
Please enter the first word: bob

Please enter the second word: bobs

bob is NOT an anagram of bobs

## Example 4
Please enter the first word: aap

Please enter the second word: pap

aap is NOT an anagram of pap

Example 5
Please enter the first word: abb

Please enter the second word: caa

abb is NOT an anagram of caa
