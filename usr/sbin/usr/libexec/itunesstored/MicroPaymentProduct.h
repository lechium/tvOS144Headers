//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MicroPaymentProductDiscount, MicroPaymentProductSubscriptionPeriod, NSArray, NSNumber, NSString;

@interface MicroPaymentProduct : NSObject
{
    long long _contentSize;	// 8 = 0x8
    NSString *_contentVersion;	// 16 = 0x10
    _Bool _hosted;	// 24 = 0x18
    NSString *_localeIdentifier;	// 32 = 0x20
    NSString *_localizedDescription;	// 40 = 0x28
    NSString *_localizedTitle;	// 48 = 0x30
    NSNumber *_price;	// 56 = 0x38
    NSString *_productIdentifier;	// 64 = 0x40
    NSArray *_discounts;	// 72 = 0x48
    MicroPaymentProductDiscount *_introductoryPrice;	// 80 = 0x50
    NSString *_subscriptionGroupIdentifier;	// 88 = 0x58
    MicroPaymentProductSubscriptionPeriod *_subscriptionPeriod;	// 96 = 0x60
}

+ (id)periodFromISO8601String:(id)arg1;	// IMP=0x00000001000665c0
@property(retain, nonatomic) MicroPaymentProductSubscriptionPeriod *subscriptionPeriod; // @synthesize subscriptionPeriod=_subscriptionPeriod;
@property(copy, nonatomic) NSString *subscriptionGroupIdentifier; // @synthesize subscriptionGroupIdentifier=_subscriptionGroupIdentifier;
@property(retain, nonatomic) MicroPaymentProductDiscount *introductoryPrice; // @synthesize introductoryPrice=_introductoryPrice;
@property(retain, nonatomic) NSArray *discounts; // @synthesize discounts=_discounts;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(copy, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(nonatomic, getter=isHosted) _Bool hosted; // @synthesize hosted=_hosted;
@property(copy, nonatomic) NSString *contentVersion; // @synthesize contentVersion=_contentVersion;
@property(nonatomic) long long contentSize; // @synthesize contentSize=_contentSize;
- (id)copyProduct;	// IMP=0x00000001000661dc
- (void)dealloc;	// IMP=0x000000010006614c
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100065ae8

@end

