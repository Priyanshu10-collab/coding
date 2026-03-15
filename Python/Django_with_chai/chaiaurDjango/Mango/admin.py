from django.contrib import admin
from .models import MangoVariety,MangoCertificate,MangoReview,Store

# Register your models here.
class MangoReviewInline(admin.TabularInline):
    model = MangoReview
    extra = 2

class MangoVarietyAdmin(admin.ModelAdmin):
    list_display = ('name', 'type', 'date_added')
    inlines = [MangoReviewInline]

class StoreAdmin(admin.ModelAdmin):
    list_display = ('name', 'locations')
    filter_horizontal = ('mango_varieties', 'mango')


class MangoCertificateAdmin(admin.ModelAdmin):
    list_display = ('mango', 'certificate_number', 'issued_date', 'valid_until')



admin.site.register(MangoVariety, MangoVarietyAdmin)
admin.site.register(MangoCertificate, MangoCertificateAdmin)
admin.site.register(MangoReview, )
admin.site.register(Store, StoreAdmin)
