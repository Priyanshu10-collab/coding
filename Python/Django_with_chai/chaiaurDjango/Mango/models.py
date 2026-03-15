from django.db import models
from django.utils import timezone
from django.contrib.auth.models import User

# Create your models here.
class MangoVariety(models.Model):
    MANGO_TYPES_CHOICE = [
        ('A','MALDA'),
        ('B','DASHERI'),
        ('C','GULABKHAS'),
        ('D','BIJU'),
        ('E','ALPHANSO'),
    ]
    name = models.CharField(max_length=100)
    type = models.CharField(max_length=2,choices=MANGO_TYPES_CHOICE)
    date_added = models.DateTimeField(default=timezone.now)
    image = models.ImageField(upload_to='mango_images')

    def __str__(self):
        return self.name


# One to many
class MangoReview(models.Model):
    mango = models.ForeignKey(MangoVariety, on_delete=models.CASCADE, related_name='reviews')
    user = models.ForeignKey(User, on_delete=models.CASCADE)
    review = models.TextField()
    rating = models.IntegerField()
    date_added = models.DateTimeField(default=timezone.now)

    def __str__(self):
        return f'{self.user.username} review for {self.chai.name}'

# Many to many

class Store(models.Model):
    name = models.CharField(max_length=100)
    locations = models.CharField(max_length=100)
    mango = models.ManyToManyField(MangoVariety)
    mango_varieties = models.ManyToManyField(MangoVariety, related_name='stores')

    def __str__(self):
        return self.name
    


#one to one

class MangoCertificate(models.Model):
    mango = models.OneToOneField(MangoVariety, on_delete=models.CASCADE, related_name='certificate')
    certificate_number = models.CharField(max_length=100)
    issued_date = models.DateTimeField(default=timezone.now)
    valid_until = models.DateTimeField()
    

    def __str__(self):
        return f'Certificate for {self.name.mango}'

