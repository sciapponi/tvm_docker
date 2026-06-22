import tvm, pkgutil

print("=== TVM version ===")
print(tvm.__version__)

print("\n=== All cmsisnn-related modules ===")
found = []
for finder, name, ispkg in pkgutil.walk_packages(tvm.__path__, prefix="tvm."):
    if "cmsisnn" in name.lower():
        print(name)
        found.append(name)

if not found:
    print("(none found)")

print("\n=== tvm.relax.backend contents ===")
try:
    import tvm.relax.backend as b
    print(dir(b))
except Exception as e:
    print(e)

print("\n=== tvm.relax.backend.contrib contents (if exists) ===")
try:
    import tvm.relax.backend.contrib as c
    print(dir(c))
except Exception as e:
    print(e)

print("\n=== grep for cmsisnn in tvm package files ===")
import os, pathlib
tvm_root = pathlib.Path(tvm.__file__).parent
hits = []
for p in tvm_root.rglob("*.py"):
    if "cmsisnn" in p.read_text(errors="ignore").lower():
        hits.append(str(p.relative_to(tvm_root)))
for h in hits:
    print(h)
if not hits:
    print("(no .py files mention cmsisnn)")
