from faker import Faker

from random import choice, randint


fake = Faker()


def gen_invoice(companyId=None, companyName=None, modelId=None, modelName=None, maxSpeed=None, seatsCount=None,
                engineCm3Count=None, colorId=None, colorName=None, carId=None, carProductionYear=None, carUsage=None,
                carPrice=None, clientId=None, clientName=None, clientAddress=None, clientPhone=None, clientNotes=None,
                invoiceId=None, invoiceDate=None):
    return f"""            *new Invoice(
                    {companyId}, "{companyName}", 
                    {modelId}, "{modelName}", {maxSpeed}, {seatsCount}, {engineCm3Count}, 
                    {colorId}, "{colorName}", 
                    {carId}, {carProductionYear}, {carUsage}, {carPrice}, 
                    {clientId}, "{clientName}", "{clientAddress}", "{clientPhone}", "{clientNotes}", 
                    {invoiceId}, "{invoiceDate}"         
            ),\n"""


colors = []
for color_index in range(10):
    colors.append(dict(
        colorId=color_index,
        colorName=[
            "White", "Black", "Red", "Blue", "Pink", "Green", "Yellow",
            "Purple", "Gray", "Gold"
        ][color_index % 10]
    ))

clients = []
for client_index in range(10):
    clients.append(dict(
        clientId=client_index,
        clientName=fake.name(),
        clientAddress=fake.street_address(),
        clientPhone=fake.phone_number(),
        clientNotes=fake.text()[:30]
    ))

with open("x.txt", "w") as f:
    for company_index in range(3):
        for model_index in range(2):
            for car_index in range(2):
                for invoice_index in range(2):
                    f.write(gen_invoice(
                        companyId=company_index,
                        companyName=[
                            "BMW", "Toyota", "Mercedes", "Opel", "Audi", "VAZ",
                            "Renault", "Mazda", "Subaru", "Citroen"
                        ][company_index % 10],
                        modelId=model_index,
                        modelName=fake.name()[:4],
                        maxSpeed=randint(60, 250),
                        seatsCount=randint(2, 8),
                        engineCm3Count=randint(1300, 5400),
                        carProductionYear=randint(1990, 2023),
                        carPrice=randint(30000, 300000),
                        carUsage=randint(1, 9999),
                        carId=car_index,
                        invoiceId=invoice_index,
                        **choice(colors),
                        **choice(clients),
                        invoiceDate=fake.date_this_decade())
                    )
