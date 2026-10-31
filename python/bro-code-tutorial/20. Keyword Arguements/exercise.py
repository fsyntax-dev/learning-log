
def get_id(birthdate, statecode, queue):
    return (f"{birthdate}-{statecode}-{queue}")

ic = get_id(statecode="03", queue="0051", birthdate="010715")

print(ic)

