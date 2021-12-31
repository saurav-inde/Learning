user_input = ''
temp = ''
while True:
    temp = input('Say something: ')

    if temp == '\end':
       break

    temp = temp.capitalize() #makes the first character capital and rest small.

    ques_keys = ('How', 'When', 'What', 'Why', 'Whom', 'Where')
    if temp[-1] != '.' and temp[-1] != '?':
        for x in ques_keys:
            if x in temp:
                user_input += temp + '? '
                break
            elif x == 'Where':
                user_input += temp + '. '
                break
    else:
        user_input += temp + '? '
print(user_input)
