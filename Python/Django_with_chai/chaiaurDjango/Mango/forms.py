from django import forms
from .models import MangoVariety

class MangoVarietyForm(forms.ModelForm):
    mango_varity = forms.ModelChoiceField(queryset=MangoVariety.objects.all(), label ="Select mango variety")