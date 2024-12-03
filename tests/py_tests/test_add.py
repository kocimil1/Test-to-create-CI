import os
import sys

current_dir = os.path.dirname(__file__)
src_path = os.path.join(current_dir, "../../src/py_src")
sys.path.insert(0, os.path.abspath(src_path))

from add import add

def test_add():
	assert add(2,3) == 5
