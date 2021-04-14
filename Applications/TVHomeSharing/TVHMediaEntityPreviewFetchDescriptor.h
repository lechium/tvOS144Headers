//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TVHKMediaEntitiesFetchRequest, TVHKMediaLibrary;
@protocol NSCopying;

@interface TVHMediaEntityPreviewFetchDescriptor : NSObject
{
    NSObject<NSCopying> *_identifier;	// 8 = 0x8
    TVHKMediaLibrary *_mediaLibrary;	// 16 = 0x10
    TVHKMediaEntitiesFetchRequest *_fetchRequest;	// 24 = 0x18
    NSString *_logName;	// 32 = 0x20
    NSString *_context;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000957c8
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *logName; // @synthesize logName=_logName;
@property(readonly, nonatomic) TVHKMediaEntitiesFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(readonly, nonatomic) TVHKMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(readonly, copy, nonatomic) NSObject<NSCopying> *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 mediaLibrary:(id)arg2 fetchRequest:(id)arg3;	// IMP=0x00000001000956ac
- (id)init;	// IMP=0x0000000100095624

@end

