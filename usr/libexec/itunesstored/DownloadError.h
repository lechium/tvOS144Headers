//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableOrderedSet, NSOrderedSet, NSString;

@interface DownloadError : NSObject <NSCopying>
{
    NSMutableOrderedSet *_downloadIdentifiers;	// 8 = 0x8
    NSString *_downloadKind;	// 16 = 0x10
    NSString *_downloadTitle;	// 24 = 0x18
    id _notification;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *downloadTitle; // @synthesize downloadTitle=_downloadTitle;
@property(copy, nonatomic) NSString *downloadKind; // @synthesize downloadKind=_downloadKind;
@property(retain, nonatomic, getter=_notification, setter=_setNotification:) id _notification; // @synthesize _notification;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100116c40
- (_Bool)representsDownloadWithIdentifier:(long long)arg1;	// IMP=0x0000000100116bdc
- (void)removeDownloadIdentifier:(long long)arg1;	// IMP=0x0000000100116b84
- (void)performActionForResponseFlags:(unsigned long long)arg1;	// IMP=0x0000000100116b80
@property(readonly, nonatomic, getter=isValidError) _Bool validError;
@property(readonly, nonatomic) NSOrderedSet *downloadIdentifiers;
- (id)copyUserNotification;	// IMP=0x0000000100116b50
- (_Bool)canCoalesceWithError:(id)arg1;	// IMP=0x0000000100116b48
- (void)addDownloadIdentifiers:(id)arg1;	// IMP=0x0000000100116b04
- (void)addDownloadIdentifier:(long long)arg1;	// IMP=0x0000000100116a94
- (void)dealloc;	// IMP=0x0000000100116a34

@end

