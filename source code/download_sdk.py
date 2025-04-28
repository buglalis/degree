# import requests
# import zipfile
# import io

# def download_stm32cube_f4():
#     url = "https://github.com/STMicroelectronics/STM32CubeF4/archive/refs/heads/master.zip"
#     print("Downloading STM32CubeF4...")
#     response = requests.get(url, stream=True)
#     if response.status_code == 200:
#         zip_file = zipfile.ZipFile(io.BytesIO(response.content))
#         zip_file.extractall("STM32CubeF4")
#         print("Download and extraction complete!")
#     else:
#         print("Failed to download SDK")

# download_stm32cube_f4()