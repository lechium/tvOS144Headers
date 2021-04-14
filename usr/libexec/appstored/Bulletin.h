//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

@interface Bulletin : NSObject
{
    NSString *_actionButtonTitle;	// 8 = 0x8
    NSURL *_actionButtonURL;	// 16 = 0x10
    long long _actionType;	// 24 = 0x18
    NSURL *_launchURL;	// 32 = 0x20
    NSDate *_creationDate;	// 40 = 0x28
    NSString *_message;	// 48 = 0x30
    NSString *_recordID;	// 56 = 0x38
    NSString *_title;	// 64 = 0x40
}

+ (id)bulletinWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x000000010022e224
+ (id)bulletinFromRequest:(id)arg1;	// IMP=0x000000010022e1a4
- (void).cxx_destruct;	// IMP=0x000000010022eab0
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSURL *actionButtonURL; // @synthesize actionButtonURL=_actionButtonURL;
@property(copy, nonatomic) NSString *actionButtonTitle; // @synthesize actionButtonTitle=_actionButtonTitle;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010022e954
- (unsigned long long)hash;	// IMP=0x000000010022e944
- (id)newBulletinRequest;	// IMP=0x000000010022e7e0
- (void)handleBulletinActionResponse:(id)arg1;	// IMP=0x000000010022e43c
- (id)copyBulletinDictionary;	// IMP=0x000000010022e2a8
- (id)initWithBulletinDictionary:(id)arg1;	// IMP=0x000000010022de14
- (id)init;	// IMP=0x000000010022dd64

@end

