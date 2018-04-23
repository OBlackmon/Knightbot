office_hours = {
    'kwak':" 2:00 p.m. Monday and Wednesday",
    
    'garrison':' 5:30 p.m. Monday and Wednesday',

    }


def give_office_hours(name):
    print(name)
    hours = office_hours[name[0]]
    msg = name[0] + "'s office hours are at" + hours
    return msg

