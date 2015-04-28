A demo repo for our April Intermediate class.

### Structure
The outline and much of the material for this course lives [here](https://training.github.com/kit/intermediate).


### References
- [GitHub help docs](https://help.github.com)
- [Git help docs](https://help.github.com)
- [Pro Git](http://git-scm.com/book/en/v2) book
  *A thorough introduction to Git and how to use it, including a section on GitHub.*
- [Mastering Markdown](https://guides.github.com/features/mastering-markdown/)
	*Handy for both learning and quickly looking up Markdown syntax.*

#### Show Current Branch in Terminal Prompt
Add these lines to your `~/.bashrc` file:
```bash
# show current git branch in prompt
parse_git_branch() {
  git branch 2> /dev/null | sed -e '/^[^*]/d' -e 's/* \(.*\)/ (\1)/'
}
export PS1="\w\[\033[36m\]\$(parse_git_branch) \[\033[00m\] > "
```
