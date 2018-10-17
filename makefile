app:
	make -C ModuleA
	make -C ModuleB
	gcc  app.c -o  app -L ./RELEASE/ -lS_all  -lC_all

