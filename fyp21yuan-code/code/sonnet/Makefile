dev:
	poetry install --dev

poetry:
	pip install poetry
	poetry install --dev

deploy-patch: clean requirements bumpversion-patch build publish clean

deploy-minor: clean requirements bumpversion-minor build publish clean

deploy-major: clean requirements bumpversion-major build publish clean

requirements:
	poetry export -f requirements.txt --output requirements.txt
	
bumpversion-patch:
	bumpversion patch
	git push
	git push --tags

bumpversion-minor:
	bumpversion minor
	git push
	git push --tags

bumpversion-major:
	bumpversion major
	git push
	git push --tags

build:
	poetry build

publish:
	poetry publish 

upload:
	python setup.py sdist bdist_wheel
	twine upload dist/*

clean: clean-build clean-pyc

clean-build:
	rm -fr build/
	rm -fr dist/
	rm -fr .eggs/
	find . -name '*.egg-info' -exec rm -fr {} +
	find . -name '*.egg' -exec rm -f {} +
	find . -name '*.DS_Store' -exec rm -f {} +

clean-pyc:
	find . -name '*.pyc' -exec rm -f {} +
	find . -name '*.pyo' -exec rm -f {} +
	find . -name '*~' -exec rm -f {} +
	find . -name '__pycache__' -exec rm -fr {} +

install: clean
	python setup.py install

reload: build
	pip uninstall -y sonnet
	pip install dist/sonnet-0.1.0-py3-none-any.whl

help:
	@echo "clean - remove all build, test, coverage and Python artifacts"
	@echo "clean-build - remove build artifacts"
	@echo "clean-pyc - remove Python file artifacts"
	@echo "install - install the package to the active Python's site-packages"


