# face-mask-detection-and-door-automation
My Final year project that was done at NCBA&amp;E for BSCS session 2017-2021.

note : this project works better on Jupyter Notebook

This project needs the following libraries:

TensorFlow - Keras - imutils - numpy - opencv - matplotlib - scipy - argparse - pyserial

Training Phase:

Step 1

You will create a neural network model with TensorFlow and will train it on a dataset of both people who are wearing facemasks and people who are not.

Note that the algorithm runs on Jupyter notebooks and requires a lot of GPU power to train the model. However, if you execute my code without changing the Model settings on Google colab I can guarantee total confidence of more than 98%.

Step 2

Here, you will create a face recognition algorithm that will be able to detect facemasks on people's faces using the trained model in the previous step. if you don't have the GPU power or the needed dependencies or knowledge to work with neural network models. I have included my pre-trained model that can be used in this step without going by step 1. name of the model fil: mask_detector.model

Step 3

Finally, you will add a simple Serial Command to the facemask detection algorithm that will order the Arduino to switch Door on or off based on the state of detection. (you must also deploy the Arduino code on your Ardunio and do the correct wiring)

Deploying Phase:

Step 1

open Anaconda Prompt, navigate to the project Environment (type) :

conda activate FMD

Then open the jupyter notebook from anaconda or just type in the console:
jupyter notebook
 
Step 2

Once jupyter notebook opens into your web browser then you have to go to the specific folder of your project and open your "FYP_FMD_Mask_Detection.ipynb" file.

Step 3

Attach arduino device to your system and mention the respective port in the python code file of FYP_FMD_Detection.ipynb (e.g COM4 or COM5)

Step 4

Once you are in the "FYP_FMD_Mask_Detection.ipynb" then you just select "Restart and run all" from "Kernel" in the upper menu bar.
After this wait for some time to compile the code and you will get a camera screen pop up in task bar showing result of Mask Detection system.


