from django.shortcuts import render
from .models import MangoVariety,
from .forms import MangoVarietyForm

# Create your views here.
def all_mango(request):
    all_mangos = MangoVariety.objects.all()
    return render(request,'mango/all_mango.html',{'all_mango':all_mangos})

def mango_store(request):
    stores: None
    if request.method == 'POST':
        form = MangoVarietyForm(request.POST)
        if form.is_valid():
           mango_variety =  form.cleaned_data['mango_varity']

    return render(request,'mango/mango_store.html')