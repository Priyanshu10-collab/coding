from django.http import HttpResponse
from django.shortcuts import render

def home(request):
    #return HttpResponse("Hello Jee ! You are at home page")
    return render(request,'website/index.html')

def about(request):
    #return HttpResponse("Hello Jee ! You are at about page")
    return render(request,'website/about.html')

def contact(request):
    #return HttpResponse("Hello Jee ! You are at contact page")
    return render(request,'website/contact.html')

def mango_store_view(request):
    return render(request,'website/mango_store.html')