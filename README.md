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


## References

* [Twitch Emotes](https://www.twitchemotes.com/)
