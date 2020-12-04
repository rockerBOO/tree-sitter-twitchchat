# tree-sitter-twitchchat 

[Twitch](https://twitch.tv/) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

```
Current Spec:

Goal: 
- To parse Twitch Chat without direct intervention (running on random chat rooms should produce results).
- To allow proper programs to be made without looking out of place in twitch chat.

PogChamp PogChamp PogChamp 

- 3 emotes in a row

PogChamp string PogChamp

- wrapping words with emotes

PogChamp string PogChamp string PogChamp

- if each string is the same?
- if each string is different

PogChamp string

- assign local variable to emote

string PogChamp

- execute string 

string PogChamp ;)

- execute with modifiers

Kappa

- special keywords/operators

:) :( :\ :* :P ;P :o >(
+  -  /  *  <  >  <  >  
- operators matching smaller default emotes
```

## Status: WIP

Adding grammar. Very open to pull requests to complete the grammar. 

* [ ] Literals
* [ ] Expressions
* [ ] Types

## What Is/Can/Am I Do Can?

Hello memers. You might be like... what is, how do i, i don't know, i wanna know, tell me how, JUST TELL ME HOW.

This video is a great overview what tree-sitter does through incremental parsing of syntax. 
- ["Tree-sitter - a new parsing system for programming tools" by Max Brunsfeld](https://www.youtube.com/watch?v=Jes3bD6P0To)

Documentation on writting the grammar.
- [Writing the Grammar](https://tree-sitter.github.io/tree-sitter/creating-parsers#writing-the-grammar)

> Writing a grammar requires creativity. There are an infinite number of CFGs (context-free grammars) that can be used to describe any given language.

## Install

- `yarn` or `npm install` 

## Build

- `yarn build` makes grammar files in src/
- `yarn test` tests in corpus/
- `yarn build-test` makes grammar files and runs the tests

### Rapid!

Watch `grammar.js` file and run the `build-test` if there is changes.

- `npx nodemon -w grammar.js --exec 'yarn build-test'`

## References

* [Twitch Emotes](https://www.twitchemotes.com/)

