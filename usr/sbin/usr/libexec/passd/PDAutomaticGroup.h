//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface PDAutomaticGroup : NSObject
{
    _Bool _nfcEnabled;	// 8 = 0x8
    NSString *_passTypeID;	// 16 = 0x10
    NSString *_groupingID;	// 24 = 0x18
    long long _passStyle;	// 32 = 0x20
    NSDate *_minDate;	// 40 = 0x28
    NSDate *_maxDate;	// 48 = 0x30
    NSDate *_ingestedDate;	// 56 = 0x38
    NSArray *_sortedPassUniqueIdentifiers;	// 64 = 0x40
    unsigned long long _passType;	// 72 = 0x48
}

+ (id)createAutomaticGroupForPass:(id)arg1 withGroupingProfile:(id)arg2;	// IMP=0x000000010022d554
- (void).cxx_destruct;	// IMP=0x000000010022e1a8
@property(readonly, nonatomic) unsigned long long passType; // @synthesize passType=_passType;
@property(copy, nonatomic) NSArray *sortedPassUniqueIdentifiers; // @synthesize sortedPassUniqueIdentifiers=_sortedPassUniqueIdentifiers;
@property(nonatomic, getter=isNFCEnabled, setter=setNFCEnabled:) _Bool nfcEnabled; // @synthesize nfcEnabled=_nfcEnabled;
@property(retain, nonatomic) NSDate *ingestedDate; // @synthesize ingestedDate=_ingestedDate;
@property(retain, nonatomic) NSDate *maxDate; // @synthesize maxDate=_maxDate;
@property(retain, nonatomic) NSDate *minDate; // @synthesize minDate=_minDate;
@property(nonatomic) long long passStyle; // @synthesize passStyle=_passStyle;
@property(copy, nonatomic) NSString *groupingID; // @synthesize groupingID=_groupingID;
@property(copy, nonatomic) NSString *passTypeID; // @synthesize passTypeID=_passTypeID;
- (_Bool)updateOrderWithCatalogGroup:(id)arg1;	// IMP=0x000000010022dddc
- (_Bool)removePass:(id)arg1;	// IMP=0x000000010022dca4
- (_Bool)addPass:(id)arg1 withGroupingProfile:(id)arg2;	// IMP=0x000000010022d860

@end

