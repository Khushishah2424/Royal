season = input("Enter a Season :")

match season:
    case "Monsoon" | "MONSOON":
        print("By a Raincoat")
    case "Summer":
        print("By a Sunscreen")
    case _:
        print("Invlaid choice")